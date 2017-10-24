#include <malloc.h>
#include <time.h>
#include <algorithm>
#include <wchar.h>


int n, q; int *B; int *A; int *C;

int  min_val = 1000000000, max_bound = 100000000, maxstages = 0;
//sequence* in;


typedef struct chain {
	int index;
	chain* next;
};

typedef struct sequence {
	int cost;
	chain* indices;
	sequence* next;
	sequence* previous;
	sequence*brother;
	int stage;
};

typedef struct station {
	int maxstage;
	sequence* child;

};

sequence* stages[100][3];


void memset_(sequence** dest, int srcPattern, int blocksize) {
	std::fill((long int*)dest, (long int*)(dest + blocksize), srcPattern);

}

station** Indexes; 


sequence*graph = NULL;
sequence*terminal = NULL;
sequence*actual = NULL;

chain*makenewchain(int index, chain*next) {
	chain*node = (chain*)malloc(sizeof(chain));
	node->index = index;
	node->next = next;
	return node;
}

station*setnewgraph(int index, int cost, int stage,sequence**temp) {
	sequence * node = (sequence*)malloc(sizeof(sequence));
	station * station_ = (station*)malloc(sizeof(station));
	node->next = NULL;
	node->previous = NULL;
	node->indices = makenewchain(index, NULL);
	node->cost = cost;
	node->stage = stage;
	node->brother = NULL;
	station_->maxstage = 1;
	station_->child = node;
	*temp = node;
	return station_;
}
sequence*setnewsequence(int index, int cost, int stage) {
	sequence * node = (sequence*)malloc(sizeof(sequence));
	node->next = NULL;
	node->previous = NULL;
	node->indices = makenewchain(index, NULL);
	node->cost = cost;
	node->stage = stage;
	node->brother = NULL;
	return node;
}


void getstate(int cost,  int* len, int* putin) {
	int putin_ = cost, len_ = 0;
	int level = cost / max_bound;
	
	*len = level;
	*putin = putin_%max_bound;

}

sequence*injectindex(sequence*node, int index) {
	chain*ch = node->indices;
	chain*temp = ch->next;
	ch->next = makenewchain(index, temp);
	return node;
}

sequence*chainnode(sequence*node, sequence*node_) {
	sequence*temp = node->previous;
	node->previous = node_;
	node_->next = node;
	return node_;
}
sequence*patchindices(sequence*node, int**B, int patchval) {
	chain*ch = node->indices;
	while (ch != NULL) {
		(*B)[ch->index] = patchval;
		ch = ch->next;
	}
	return node;
}

station*inject(int cost,int index,station*station_,int stage,sequence**temp) {
	sequence*node = station_->child,*nodetemp=NULL; int flag = 0;
	for (int i = 0; i < station_->maxstage; i++){
		if (node->stage == stage)
			if (node->cost != cost)
				printf("problem");
			else
			{
				node = injectindex(node, index);
				*temp = node;
				flag = 1;
			}
		nodetemp = node;
		node = node->brother;
	}
	if (flag == 0) {
		//sequence*nodetemp= station->child->brother;
		if (node != NULL)
			printf("problem");
		node = setnewsequence(index, cost, stage);
		*temp = node;
		nodetemp->brother = node;
		station_->maxstage++;
	}
	return station_;
	
}
void sort(int stage, sequence*node) {
	int i;
	for ( i = 0; i < maxstages&&(long int)stages[i][0]<=stage; i++) {
		if ((long int)stages[i][0]==stage) {
			if (node->cost > stages[i][1]->cost) { stages[i][1] = node; stages[i][2] = node;}
			return;
		}
	}
	if (i == maxstages) {
		maxstages++;
		stages[i][0] = (sequence*)stage;
		stages[i][1] = node;
		stages[i][2] = node;
	}
	else
	{
		int j = i;
		i = maxstages-1 ;
	    while (i>=j) { for (int k=0;k<3;k++) stages[i + 1][k] = stages[i][k]; i--;}
		i++;
		stages[i][0] = (sequence*)stage;
		stages[i][1] = node;
		stages[i][2] = node;
		maxstages++;
		//i++;
	}
}
void chainthis(int index, int cost) {
	int putin, len;
	getstate(cost, &len, &putin);
	sequence*temp;
	if (Indexes[putin] > 0)
		Indexes[putin] = inject(cost, index, Indexes[putin], len, &temp);
	else {
		Indexes[putin] = setnewgraph(index, cost,len,&temp);
	}
	sort(len, temp);

	
}
void linkstage(sequence*start) {
	for (int i = 0; i < maxstages && (long int)stages[i][0]<= start->stage; i++) {
		if ((long int)stages[i][0] == start->stage)
		{
			if (stages[i][1]->cost != start->cost) {
				chainnode(stages[i][2],start);
				stages[i][2] = start;
			}
			break;
		}
	}
}

void link() {
	sequence*temp=NULL;
	for (int i = max_bound - 1; i >= 0; i--) {
		if (Indexes[i] > 0) {
			for (sequence*start = Indexes[i]->child; start != NULL; start = start->brother) {
				linkstage(start);
			}
		}

	}
	for (int i = maxstages-1; i >=0; i--) {
		if (i == maxstages - 1) terminal = stages[i][1];
		else chainnode(temp, stages[i][1]);
		temp = stages[i][2]; 
		if (i == 0) graph = temp;
		
	}
}
int hashit(int cost) {
	return cost - min_val + 1;


}

int revhash(int cost) {
	return cost + min_val - 1;


}
void patchresults(sequence*term, int*A, int max, int**B) {
	int mincost = 1000000000;
	for (int i = max - 1; i >= 0; i--) {
		if (mincost > A[i])
		{
			mincost = A[i];
			while (revhash(term->cost) >= A[i]) {
				patchindices(term, B, i + 1);
				term = term->previous;
				if (term == NULL) return;
			}

		}
	}

}


int main() {

	int maxday = 0;
	


	scanf("%i", &n);
	A = (int *)malloc(sizeof(int) * n);

	for (maxday = 0; maxday < n; maxday++) {
		scanf_s("%i", &A[maxday]);
	}
	scanf("%i", &q);
	B = (int *)malloc(sizeof(int) * q);

	for (int a0 = 0; a0 < q; a0++) {
		int xi;
		scanf("%i", &xi);
		B[a0] = xi;
		if (min_val > xi) min_val = xi;
	}


	Indexes = (station**)malloc((max_bound ) * sizeof(long int));
	memset(Indexes, 0, (max_bound ) * sizeof(long int));


	for (int a0 = 0; a0 < q; a0++)
	{
		chainthis(a0, hashit(B[a0]));

	}
	

	link();

	C = (int *)malloc(sizeof(int) * q);
	memset(C, -1, 4 * q);
	patchresults(terminal, A, maxday, &C);

	for (int j = 0; j < q; j++)
	{
		printf( "%d ", C[j]);
	}




}

