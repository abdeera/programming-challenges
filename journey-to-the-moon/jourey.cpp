
int*V ;
int*W ;
int max_ ;

int  get(int v) {
	if (v == 0)
		return -1;
	while (W[v] < 0) v = -W[v];
	return v;
}

void increasefrom(int a, int b) {
	int a_ = get(V[a]);
	int	b_ = get(V[b]);

	if (b_ > 0) 
		if (a_ != b_) {
			W[a_] += W[b_];
			W[b_] = -a_;
		}
		else;
	else {
			W[a_] += 1;
			V[b] = a_;
		}
	
}

int main()
{

    int n, l;
	max_ = 0;
	scanf("%d%d", &n, &l);
	if (n == 1)
	{
		printf("0\n");
		return(0);
	}
	V = (int*)calloc(n, sizeof(int));
	W = (int*)calloc(n, sizeof(int));
	memset(V, 0, n * sizeof(int));
	memset(W, 0, n * sizeof(int));
	int *pairs = (int*)malloc(2*sizeof(int));
	long long int  sum=0,prod=1;
	int a, b;
	for (int i = 0; i < l; i++) {
		scanf("%d%d", pairs, pairs+1);
		a = pairs[0];
		b = pairs[1];
		if (V[a] > 0)
			increasefrom(a, b);
		else 
		if (V[b] > 0)
			increasefrom(b, a);
		else {
			max_ += 1;
			V[a] = max_;
			V[b] = max_;
			W[max_] += 2;
		}
	}
	/** Write code to compute answer using n,l,pairs**/
	
	
	int sumtemp=0;
	for (int i = 1; i <= max_; i++) {
		if (W[i] > 0) {
			prod = W[i] * sumtemp;
			sumtemp += W[i];
			sum += prod ;
			
		}
	}
	if (n - sumtemp > 0) {
		sum += (n - sumtemp)*sumtemp;
		prod = (n - sumtemp);
		prod *= (n - sumtemp - 1); 
		prod /= 2;
		sum+=prod;
	}
	

	printf("%lld\n", sum);
	return(0);

}

