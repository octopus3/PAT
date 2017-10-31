/*L1-005*/
#include<stdio.h>
#include<string.h>     /*题目意思是通过试机座位号找到考试座位号*/
int main()
{
  int N,i,j,temp;                                     //定义正整数N<=1000 
  int testnum1[1000],testnum2[1000];            //定义试机座位号testnum1 考试座位号testnum2 
  int searchnum;                               //定义需要查找数目
  int findnum[1000],findnum1[1000];           //定义试机座位号findnum 
  long long int number[1000];                //定义准考证号number  
   for(i=0;i<1000;i++)   
    {
         findnum[i]=0;                      //初始化部分
    findnum1[i]=0; 
    }
  scanf("%d",&N);                    //开始进入内容 
  for(i=0;i<N;i++)
  {
    scanf("%lld %d %d",&number[i],&testnum1[i],&testnum2[i]);
  }
    scanf("%d",&searchnum);
    
    for(i=0;i<searchnum;i++)                 //查找部分 
    {
    scanf("%d",&findnum[i]);
     findnum1[findnum[i]-1]=findnum[i];     //findnum1作为下标 
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
