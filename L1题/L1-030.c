#include<stdio.h>
#include<string.h>
void find(int sex1[50],int left,int right,char name1[50][10])
{
	int i=left,j=right;
	int ipvot=(left+right)/2;
	int ipos[50];
	memset(ipos,0,sizeof(ipos));
	while(i<=ipvot)
	{
		/*从左到右查找不同性别的同学,并为其作为标记*/
		if(sex1[i]!=sex1[j]&&ipos[i]==0&&ipos[j]==0)
		{
			printf("%s %s\n",name1[i],name1[j]);
			ipos[i]=1;
			ipos[j]=1;
			i++;
			j=right;
		}
		if(sex1[i]==sex1[j]||ipos[j]==1)
		{
			j--;
		}
	}
}
int main()
{
	int i,j;
	int N;/*定义正偶数*/
	int sex[50]; 
	char name[50][10];
	scanf("%d",&N);getchar();
	/*录入部分*/
	for(i=0;i<N;i++)
	{
		scanf("%d %s",&sex[i],name[i]);getchar();
	}
	/*查找部分*/
    find(sex,0,N-1,name);
	return 0;
}
