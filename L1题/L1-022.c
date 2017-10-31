#include<stdio.h> 
int main()
{
	int shu[1000],N,i,count[2];//count[0]为偶数次数  count[1]为奇数次数 
	scanf("%d",&N);
	count[0]=0;
	count[1]=0;
    for(i=0;i<N;i++)
    {
    	scanf("%d",&shu[i]);
	}
	for(i=0;i<N;i++)
	{
	    if(shu[i]%2!=0)
		{
			count[1]++;
		}
		if(shu[i]%2==0)
		count[0]++;
	}
	printf("%d %d",count[1],count[0]);
	return 0;
}
