#include<stdio.h>
#include<string.h>
int main()
{
  int N; //定义正方形边长 3<=N<=21
  char C; 
  int i,j,temp;   //i控制行字符C的个数，j控制列字符C的个数 
    scanf("%d %c",&N,&C);
    if(N%2!=0)
    {
      temp = N/2+1;
  }
  if(N%2==0)
  {
    temp = N/2;
  }
    for(i=0;i<temp;i++)
    {
      for(j=0;j<N;j++)
      {
        printf("%c",C);
    }
    if(i<temp-1)printf("\n");   
  }
  return 0;
}
