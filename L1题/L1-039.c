#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	int i,len,j,temp=0;
	int N;/*��������*/
	char A[1000];/*�����ַ���*/
	printf("������������\n");
	scanf("%d",&N);getchar();
	printf("������һ��Ӣ���ַ�����\n");
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
