#include<stdio.h>
#include<string.h>
int main()
{
	char A[10000],B[4]={'G','P','L','T'};
	int ASCA[255],i;
	gets(A);
	for(i=0;i<strlen(B);i++)
	{
		ASCA[B[i]]=i;
	}
	for(i=0;i<strlen(A);i++)
	{
		if(ASCA[A[i]]==1)
		{
			printf("P");
			break;
		}
		if(ASCA[A[i]]==0)
		{
			printf("G");
			break;
		}
		if(ASCA[A[i]]==2)
		{
			printf("L");
			break;
		}
		if(ASCA[A[i]]==3)
		{
			printf("T");
			break;
        }
	}
	return 0;
}
