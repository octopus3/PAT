#include<stdio.h>
#include<string.h>
int main()
{
	char A[1000],B[1000];
	int i=0,j;
	int flag[2]={0,0};
	int A1,B1;
	scanf("%s",A);
	getchar();
	gets(B);
    for(i=0;i<strlen(A);i++)
    {
        if(A[i]<='9'&&A[i]>='0'&&A[0]!='-')
        {
        	flag[0]=1;
	    }
	    else
	    {
		flag[0]=0;
		break;
	    }
	}
	 for(i=0;i<strlen(B);i++)
    {
            if(B[i]<='9'&&B[i]>='0'&&B[0]!='-')
            {
        	flag[1]=1;
	    	}
		else
		{ 
		flag[1]=0;
		break;
	    }
	}
	sscanf(A,"%d",&A1);
	sscanf(B,"%d",&B1);
    if(A1>1000||A1==0)flag[0]=0;
	if(B1==0||B1>1000)flag[1]=0;
	if(flag[0]==1&&flag[1]==1)
	{
		printf("%d + %d = %d",A1,B1,A1+B1);
	}
	else if(flag[0]==0&&flag[1]==1)
	{
		printf("? + %d = ?",B1);
	}
	else if(flag[0]==0&&flag[1]==0)
	{
		printf("? + ? = ?");
	}
	else if(flag[0]==1&&flag[1]==0)
	{
		printf("%d + ? = ?",A1);
	}
	return 0;
}
