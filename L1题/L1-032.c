#include<stdio.h>
#include<string.h>
#define max 10001
int main()
{
	int N;
	char a;
	char b[max];
	char ctemp[max];
	int len=0,i,j,temp;/*定义长度len 循环控制变量i,j 长度控制temp*/
	/*输入模块*/
    scanf("%d",&N);
	getchar();
	scanf("%c",&a);
	getchar();
	gets(b);
	len = strlen(b);
	temp=N;
	/*实现效果模块*/
	/*1、填充模块*/
	if(temp>=len)
	{
		for(i=0;i<temp-strlen(b);i++)
		{
			printf("%c",a);
		}
		printf("%s",b);
	}
	/*2、删减模块*/
	else
	{
		for(i=len-1,j=0;i>=len-N;i--,j++)
		{
			ctemp[j]=b[i];
		}
		ctemp[j]='\0';
		for(i=j-1;i>=0;i--)
		{
			printf("%c",ctemp[i]);
		}
	}
	return 0;
}
