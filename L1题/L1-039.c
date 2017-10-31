#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	int i,len,j,temp=0;
	int N;/*定义列数*/
	char A[1000];/*定义字符串*/
	printf("请输入列数：\n");
	scanf("%d",&N);getchar();
	printf("请输入一段英文字符串：\n");
	gets(A); 
	len=strlen(A); 
	len-=1;
    for(i=0;i<N;i++)
	{
		temp=(len/N)*N+i;
	    for(j=0;j<(len/N+1);j++)
		{
			if(temp<strlen(A))
			{
		    printf("%c",A[temp]);
		    temp-=N;
	        }
			else
			{
				printf(" ");
				temp-=N;
				for(j=1;j<(len/N+1);j++)
				{
				printf("%c",A[temp]);
				temp-=N;
			    }
			} 
		}	
		printf("\n");
	}
	system("PAUSE");
	return 0;
}
