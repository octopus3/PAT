#include<stdio.h>
int main()
{
  int n,i,a=1;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  a*=2;
  }
  printf("2^%d = %d",n,a);
  return 0;
}
