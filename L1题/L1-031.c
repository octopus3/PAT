#include<stdio.h>
#include<math.h>
int main()
{
	int N;/*定义正整数*/
	float H[20];/*定义身高*/
	float W[20];/*定义真实体重*/
	float sizeW[20];
	float sum[20];
	int f[20]={0};
	int i;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
	scanf("%f %f",&H[i],&W[i]);
	W[i]*=0.5;/*单位转换*/
    sizeW[i]=(H[i]-100)*0.9;/*标准体重*/
    if(sizeW[i]>W[i])
	sum[i]= sizeW[i]-W[i];
	else if(sizeW[i]<W[i])
	sum[i]=W[i]-sizeW[i];
	if(sum[i]<sizeW[i]*0.1)f[i]=1;
	else f[i]=0;
	}
	for(i=0;i<N;i++)
	{
		if(f[i]==1)
    	{
			printf("You are wan mei!\n");
    	}
        if(W[i]>sizeW[i]&&(f[i]==0))
		{
			printf("You are tai pang le!\n");
		}
        if(W[i]<sizeW[i]&&(f[i]==0))
		{
			printf("You are tai shou le!\n");
		}
	}
	return 0;
}
