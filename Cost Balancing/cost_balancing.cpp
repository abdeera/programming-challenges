#include <stdio.h>
#include <malloc.h>
#include <iostream>
#include <algorithm>


using namespace std;
void memset_(int* dest, int srcPattern, int blocksize) {
	std::fill(( int*)dest, ( int*)(dest + blocksize), srcPattern);

}

int *ids, amt = 0;

int main() {
	int n;
	int m;
	cin >> n >> m;
	ids = (int*)malloc(m * sizeof(int));
	memset_(ids, 0, m);
	for (int a0 = 0; a0 < n; a0++) {
		int id_number;
		int amount;
		cin >> id_number >> amount;
		ids[id_number] += amount;
		amt += amount;


	}
	double eqt = (amt + 0.0) / m;
	double rounded = (int)eqt;
	double rest = amt - rounded*m;
	ids[1] = (ids[1] - (rest + rounded));
	for (int i = 2; i <= m; i++) {
		ids[i] = ids[i] - (rounded);
	}
	for (int i = 1; i <= m; i++) {
		printf("%d %d\n", i, ids[i]);
	}
	return 0;
}
