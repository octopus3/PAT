#include<stdio.h>  /*���˭�Ȼ������������õ������˺���������֮�͡�*/
int main()
{
	int jiu1,jiu2;  /*����jiu1����׵����Ⱦ�����jiu2�����ҵ����Ⱦ���*/ 
	int count[2]={0,0};  /*������ҺȾ�����0����ף�1������*/ 
	int huihe;    /*����غ���*/ 
	int N1[200],N2[200];   /*���廮ȭN1����ף�N2������*/
	int H1[200],H2[200];  /*���庰H1�����,H2������*/
	int i;
	int sum[200];    /*������㿴��˭���������ֵ������˱Ȼ�����������*/
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
	/*����Ϊ�жϲ���*/
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
