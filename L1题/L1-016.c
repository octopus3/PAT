#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int f[100];
	int N,i,j;  //����N ����ѭ������i,j 
	int sum[100];   /*������Ͳ���sum*/
	int right[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};  //����Ȩ
	int  Z[100]; /*������11ȡģ��Ľ��*/
	char ID[100][18]; /*�������֤����*/
	int passsum=0;
	int NewID[100][18]; 
    	for(i=0;i<100;i++)
	    {
     		sum[i]=0;
     		f[i]=0;
     	}
/*1*/	scanf("%d",&N);getchar();    /*��1~10��Ϊ��Ϣ¼��ģ��*/
/*2*/	for(i=0;i<N;i++)
/*3*/	{
/*4*/		for(j=0;j<18;j++)
/*5*/		{
/*6*/		scanf("%c",&ID[i][j]);
/*7*/     	}
/*8*/     	if(i<N)
/*9*/     	getchar();
        }
        /*ת��ģ��,���еó�Zֵ�Ĳ���*/
        for(i=0;i<N;i++)
        {
        	for(j=0;j<17;j++)
        	{
        		if(ID[i][j]!='X')
        		NewID[i][j]=ID[i][j]-'0';
        		else
        		NewID[i][j]=10;
        		sum[i]+=NewID[i][j]*right[j];
			}
			 Z[i]=sum[i]%11;
		}
		printf("Z=%d",Z[0]);
		 for(i=0;i<N;i++)
        {
        		if(ID[i][17]!='X')
        		NewID[i][17]=ID[i][17]-'0';
        		else
        		NewID[i][17]=10;
		}
		for(i=0;i<N;i++)
		{
		    switch(Z[i])
		    {
		    	case 0:
		    		if(NewID[i][17]==1)f[i]=1;
		    		else f[i]=0;
					if(f[i]==1)
					passsum+=1;
					break;
		    	case 1:
		    	    if(NewID[i][17]==0)f[i]=1;
		    		else f[i]=0;
					if(f[i]==1)
					passsum+=1;
					break;
		    	case 2:
		    	    if(NewID[i][17]==10)f[i]=1;
		    		else f[i]=0;
					if(f[i]==1)
					passsum+=1;
					break;
		    	case 3:
		    		if(NewID[i][17]==9)f[i]=1;
		    		else f[i]=0;
					if(f[i]==1)
					passsum+=1;
					break;
		    	case 4:
		    		if(NewID[i][17]==8)f[i]=1;
		    		else f[i]=0;
					if(f[i]==1)
					passsum+=1;
					break;
		    	case 5:
		    		if(NewID[i][17]==7)f[i]=1;
		    		else f[i]=0;
					if(f[i]==1)
					passsum+=1;
					break;
		    	case 6:
		    		if(NewID[i][17]==6)f[i]=1;
		    		else f[i]=0;
					if(f[i]==1)
					passsum+=1;
					break;
				case 7:
		    		if(NewID[i][17]==5)f[i]=1;
		    		else f[i]=0;
					if(f[i]==1)
					passsum+=1;
					break;
				case 8:
		    		if(NewID[i][17]==4)f[i]=1;
		    		else f[i]=0;
					if(f[i]==1)
					passsum+=1;
					break;
				case 9:
		    		if(NewID[i][17]==3)f[i]=1;
		    		else f[i]=0;
					if(f[i]==1)
					passsum+=1;
					break;
				case 10:
		    		if(NewID[i][17]==2)f[i]=1;
		    		else f[i]=0;
					if(f[i]==1)
					passsum+=1;
					break;				
			}
			if(f[i]==0)
			{
				for(j=0;j<18;j++)
				{
					printf("%c",ID[i][j]);
				}
				printf("\n");
			}
			if(passsum==N)
			{
				printf("All passed");
			}
		}
	
	 return 0;
}
