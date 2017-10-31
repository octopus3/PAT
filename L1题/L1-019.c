#include<stdio.h>  /*如果谁比划出的数字正好等于两人喊出的数字之和。*/
int main()
{
	int jiu1,jiu2;  /*定义jiu1代表甲的最大喝酒量，jiu2代表乙的最大喝酒量*/ 
	int count[2]={0,0};  /*计算甲乙喝酒数，0代表甲，1代表乙*/ 
	int huihe;    /*定义回合数*/ 
	int N1[200],N2[200];   /*定义划拳N1代表甲，N2代表乙*/
	int H1[200],H2[200];  /*定义喊H1代表甲,H2代表乙*/
	int i;
	int sum[200];    /*定义计算看看谁喊出的数字等于两人比划出来的数字*/
	scanf("%d %d",&jiu1,&jiu2);
	scanf("%d",&huihe);
	for(i=0;i<200;i++)
	{
		H1[i]=0;
		N1[i]=0;
		H2[i]=0;
		N2[i]=0;
	}
	for(i=0;i<huihe;i++)
	{
		scanf("%d %d %d %d",&H1[i],&N1[i],&H2[i],&N2[i]);
		sum[i]=H1[i]+H2[i];
	}
	/*以下为判断部分*/
	for(i=0;i<huihe;i++)
	{
		if(N1[i]==sum[i]&&N2[i]!=sum[i])
		{
			count[0]++;
		    if(count[0]>jiu1)
		    {
		    	printf("A\n%d",count[1]);
		    	break;
			}
			continue;
		}
		else if(N2[i]==sum[i]&&N1[i]!=sum[i])
		{
			count[1]++;
		    if(count[1]>jiu2)
		    {
		    printf("B\n%d",count[0]);
		    break;
			}
			continue;
		}
	}
	return 0;
}
