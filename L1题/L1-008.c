#include<stdio.h>
int main()
{
  int A,B,sum;
  int i,temp,j;
  scanf("%d %d",&A,&B);
  temp=A;
  while(temp<=B)
  {
    for(j=0;j<5&&temp<=B;j++)
    {
    sum+=temp;
    printf("%5d",temp);
    temp+=1;
    }
    printf("\n");
  }
  printf("Sum = %d",sum);
  return 0;
}
