#include<stdio.h>
int main()
{
	int N,i,j,k,sum=0;        /*��������Ȧ����*/
	int K[100];              /*��������Ȧ�ڵ�����*/
	int ID[100][1000];      /*����ID*/
	int findK;             /*������Ҹ���findK*/
	int findID[100000]={0};   /*�������ID findID*/
	int f[100000]={0};       /*������ҼǺ�f �ҵ�Ϊ1���Ҳ���Ϊ0*/
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
	scanf("%d",&findK);     //���������Ŀ 
    for(i=0;i<findK;i++)
    {
    	scanf("%d",&findID[i]);  /*������Ҫ���ҵ�ID*/
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
	 
	/*���Ҳ���*/
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
	/*�����ʽ���ظ����������*/
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
