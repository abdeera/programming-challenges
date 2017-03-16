#include  <stdio.h>
#include  <math.h>
#include  <string.h>
#include  <malloc.h>
 
 
int main(void)
{
  int t;
  char* A=(char*)malloc(6000000*sizeof(char));
   char* B=(char*)malloc(6000000*sizeof(char));
   scanf("%d",&t);
   
  for (int i=0;i<t;i++){
	long int calc=0,half=0,count=0;
        int sign=1,k=0,diversity=0;
     
		
		scanf("%s",A);scanf("%s",B);
	    
		
		for (int i=0;i<strlen(A);i++)
	{
	if (A[i]==B[i]+1)
		{ 
		if(k==0)sign=(++k);
		half++;
		if (half*sign<0) sign*=-1;
		count+=(sign<0);
		calc++;
	}else if (A[i]+1==B[i])
		{
		if(k==0)sign=(--k); 
		half--;
		if (half*sign<0) sign*=-1;
		count+=(sign>0);
		calc++;
	}
	if (A[i]=='1') diversity=((diversity==2|diversity==3)?3:1);
	else diversity=((diversity==1|diversity==3)?3:2);
	
	}
	
	
	if((diversity!=3))
	
		printf("\nUnlucky Chef\n\n");
	
	else
		printf("\nLucky Chef\n%ld\n",calc-count);
 
 
 
 
}
}    
