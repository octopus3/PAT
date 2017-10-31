#include<stdio.h>
int main()
{
	int i=0,j;
	char name[10];
	char *p=name;
	char nameA[10];
	char nameB[10];
	while(name[0]!='.')
	{
		scanf("%s",name);getchar();
		i++;
		if(i==2&&name[0]!='.')
		{
			for(j=0;j<11;j++)
			{
				nameA[j]=*(p+j);
			}
		}
		if(i==14&&name[0]!='.')
		{
			for(j=0;j<11;j++)
			{
				nameB[j]=*(p+j);
			}
		}
	}
	i-=1;
	if(i<2)
	{
		printf("Momo... No one is for you ...");
	}
	else if(i<14)
	{
		printf("%s is the only one for you...",nameA);
	}
	else if(i>=14)
	{
		printf("%s and %s are inviting you to dinner...",nameA,nameB);
	}
	return 0;
}
