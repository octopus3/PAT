#include<stdio.h>
int main()
{
	int D,Temp,C;
	scanf("%d",&D);
	Temp = D+2;
    if(Temp>7)
    {
    	C=Temp%7;
    	if(C!=0)
    	printf("%d",C);
    	if(C==0)
    	{
    		printf("7");
		}
	}
	if(Temp<=7&&Temp>0)
	{
		printf("%d",Temp);
	}
	return 0;
}
