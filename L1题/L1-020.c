#include<stdio.h>
int main()
{
	int N,i,j,k,sum=0;        /*定义朋友圈个数*/
	int K[100];              /*定义朋友圈内的人数*/
	int ID[100][1000];      /*定义ID*/
	int findK;             /*定义查找个数findK*/
	int findID[100000]={0};   /*定义查找ID findID*/
	int f[100000]={0};       /*定义查找记号f 找到为1，找不到为0*/
	int flag[100000]={0},ipos=0;
	scanf("%d",&N);  
	for(i=0;i<N;i++)
	{
		scanf("%d",&K[i]);
		for(j=0;j<K[i];j++)
		{
			scanf("%d",&ID[i][j]);
		}
	}
	scanf("%d",&findK);     //输入查找数目 
    for(i=0;i<findK;i++)
    {
    	scanf("%d",&findID[i]);  /*输入需要查找的ID*/
	}
	
	for(i=0;i<findK;i++)
	{
		for(j=i;j<findK;j++)
		{
			if(i!=j)
			{
			   if(findID[i]==findID[j])
			   {
			   	ipos=j;
			   	flag[ipos]+=1;
			   	f[ipos]=1;
			   	break;
			   }
			}
		}
	}
	 
	/*查找部分*/
    for(k=0;k<findK;k++)
    {
    	for(i=0;i<N;i++)
    	{
    		for(j=0;j<K[i];j++)
    		{
    			if(flag[k]!=1)
				{ 
    		    	if(findID[k]==ID[i][j])
    			    {
    				    f[k]+=1;
    				    if(f[k]<=1&&f[k]>0)
    				    sum+=1;
    				    break;
				    }
			   }
			     if(flag[k]==2)
			     {
			     	sum-=1;
			     }
			}
		}
	}
	/*输出格式和重复输出的问题*/
	for(i=0;i<findK;i++)
	{
		static int W=0;
		if(W==0)
		{
        if(f[i]==0)
        {
        	printf("%05d",findID[i]);
        	W=1;
		}
	    }
	    else
	    {
	    	if(f[i]==0)
	    	printf(" %05d",findID[i]);
		}
		if(sum==findK)
		{
			printf("No one is handsome");
			break;
		}
	}
	return 0;
}
