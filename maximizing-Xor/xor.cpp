#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
 int i;double n;
int numb= (int)(pow(2.,1+(int)(log((double)r)/log(2.)))-1)^r;
if(l<=numb) return numb|r;
if(l==r) return 0;
if (r-l>=(int)(pow(2.,1+(int)(log((double)l)/log(2.))))) return  numb|r;

numb= (int)(pow(2.,1+(int)(log((double)l)/log(2.)))-1)^l;
int diff=numb&((int)(pow(2.,1+(int)(n=log((double)(i=r-l))/log(2.)))-1));
if (diff>=i) diff&=(int)(pow(2.,(int)n)-1);
i=l|diff;
numb=(i)^(i+1);
return numb;



}
int main() {
    int res;
    int _l;
    scanf("%d", &_l);
    
    int _r;
    scanf("%d", &_r);
    
    res = maxXor(_l, _r);
    printf("%d", res);
    
    return 0;
}
