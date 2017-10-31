#include<stdio.h>
#include<math.h>
int main()
{
  int N,start,i;            //定义正整数1<N<2^31
  scanf("%d",&N);
  int MAX=sqrt(N);          //定义最大 
  int len=0;
    for(len = 12; len >= 1; len--)
     {
        for(start = 2; start <= MAX; start++) 
        {
            long long int ans = 1;
            for(i = start; i - start <= len - 1; i++)
                ans *= i;
                if(N % ans == 0)
                {
                  printf("%d\n%d", len, start);
                  for(i = start + 1; i - start <= len - 1; i++)
                    printf("*%d", i);
                    return 0;
                 }
        }
    }
       printf("1*%d",N); 
   return 0;
}
