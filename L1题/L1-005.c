/*L1-005*/
#include<stdio.h>
#include<string.h>     /*��Ŀ��˼��ͨ���Ի���λ���ҵ�������λ��*/
int main()
{
  int N,i,j,temp;                                     //����������N<=1000 
  int testnum1[1000],testnum2[1000];            //�����Ի���λ��testnum1 ������λ��testnum2 
  int searchnum;                               //������Ҫ������Ŀ
  int findnum[1000],findnum1[1000];           //�����Ի���λ��findnum 
  long long int number[1000];                //����׼��֤��number  
   for(i=0;i<1000;i++)   
    {
         findnum[i]=0;                      //��ʼ������
    findnum1[i]=0; 
    }
  scanf("%d",&N);                    //��ʼ�������� 
  for(i=0;i<N;i++)
  {
    scanf("%lld %d %d",&number[i],&testnum1[i],&testnum2[i]);
  }
    scanf("%d",&searchnum);
    
    for(i=0;i<searchnum;i++)                 //���Ҳ��� 
    {
    scanf("%d",&findnum[i]);
     findnum1[findnum[i]-1]=findnum[i];     //findnum1��Ϊ�±� 
    }
        
        for(i=0;i<searchnum;i++)
        {
            for(j=0;j<N;j++)
            {
               if(findnum[i]==testnum1[j])
               {
                 printf("%lld %d\n",number[j],testnum2[j]);
                }
             }
        }
return 0;
}
