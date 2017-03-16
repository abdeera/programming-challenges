#include <stdio.h>
#include <malloc.h>

int main(void) {int a,b,c=0,ind=0,j,k,B[501],Y[501],h=0,f;
	scanf("%d ",&a);
    if(a>10||a<1) return 0;
	//cin >> a;cin >> f;
	for(int i=1;i<=a;c=(B[i-1]>c)?B[i-1]:c,i++)
    //cin >> B[i-1];
	{scanf("%d",&B[i-1]);
	if(B[i-1]>40||B[i-1]<1) return 0;}
	int *V=(int*)malloc(c*sizeof(int));
	//memset(V,0,c*4);memset(Y,0,501*4);
    for (int i=2;i<=c;i++)
    {
    if(V[i-2]!=1)
    {
    for( j=i,k=i;j<=c;)
    {
	if(j==k)
    {for(int jj=1;jj<=a;jj++)
    if(j<=B[jj-1])
		Y[jj-1]=(Y[jj-1]==0)?i:(Y[jj-1]*i)/*%f*/;
	k=k*i;}
    j+=i;
    V[j-2]=1;
    }
    }
   }
	for( j=1;j<=a;j++)//cout << Y[j-1] << endl ;*
		printf("%d\n",Y[j-1]/*%f*/);
	return 1;
	}  
