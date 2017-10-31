#include<stdio.h>

int main()
{
	int i,N,Temp,S;
	scanf("%d",&N);
	Temp = 1;
	S = 0;
	for(i=1;i<=N;i++)
   {
     	Temp *= i;
	    S += Temp;
   }   
	printf("%d",S);
	return 0;
}
