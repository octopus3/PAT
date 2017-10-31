#include<stdio.h>
#include<math.h>
int main()
{
  int N,a,i,j,k,l;
  char xing;
  scanf("%d",&N);  getchar();
  scanf("%c",&xing);
  if(N<=0)
  {
    k=0;
    a=0;
    l=0;
  }
  else if(N>=1&&N<7)
  {
    k = 1;
    a=0;
    l=N-(2*k*k-1);
  }
  else if(N>=7&&N<17)
  {
    k = 3;
    a=0;
    l=N-(2*k*k-1);
  }
  else
  {
  k = sqrt((N+1)/2);
  l=N-(2*k*k-1);
  if(k%2==0)
  {
    a=3;
  }
  else
  {
    a=2;
  }
    }
  
  for(i=k+a;i>=1;i-=2)
  {
    for(j=1;j<=(k+a-i)/2;j++)
    {
      printf(" ");
    }
    for(j=1;j<=i;j++)
    {
      printf("%c",xing);
    }
    for(j=1;j<=(k+a-i)/2;j++)
    {
      printf(" ");
    }
    printf("\n");
  }
  for(i=3;i<=k+a;i+=2)
  {
    for(j=1;j<=(k+a-i)/2;j++)
    {
      printf(" ");
    }
    for(j=1;j<=i;j++)
    {
      printf("%c",xing);
    }
    for(j=1;j<=(k+a-i)/2;j++)
    {
      printf(" ");
    }
    printf("\n");
  }
  printf("%d",l);
  return 0;
}
