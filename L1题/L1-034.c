#include<stdio.h>
#include<string.h>
int main()
{
	int N,K;/*����������N,K*/
	int num;/*�������Ա�ǩ����*/
	int i,j;
	int sum[1001];/*���������*/
	int Max=0,Maxindex=0;
	memset(sum,0,sizeof(sum));
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&K);getchar();
		for(j=0;j<K;j++)
		{
			scanf("%d",&num);
			sum[num]++;
		}
	}
	for(i=0;i<1001;i++)
    {
    	if(sum[i]>=Max)
    	{
    		Max=sum[i];
    		Maxindex=i;
		}
	}
    printf("%d %d",Maxindex,Max);
	return 0;
}
