#include<stdio.h>
#include<string.h>
int main()
{
	int N,i;
	char sex[10];/*�����Ա�MΪ�� FΪŮ*/ 
	float High[10];/*�������*/
	float highsum[10];
	scanf("%d",&N);getchar();
	for(i=0;i<N;i++)
	{
		scanf("%c %f",&sex[i],&High[i]);getchar();
	}
	for(i=0;i<N;i++)
	{
		switch(sex[i])
		{
			case 'M':
				highsum[i]=High[i]/1.09;break;
		    case 'F':
				highsum[i]=High[i]*1.09;break;		
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%.2f\n",highsum[i]);
	}
    return 0;   
}
