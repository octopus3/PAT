#include<stdio.h>
# include<stdlib.h>
# include<string.h>

 int main()
 {
     char a[10], n[1010];
    gets(n);
     int len = strlen(n), count[10] = {};// len Ϊλ�� len=6 123456
     a[0] = '0';                        //a[0]Ϊ0��ASCA�� 
     int i, j;
     for(i = 1; i < 10; i++)
     {
         a[i] =a[0] + i;         /*a[0]��ʼ��ASCA��+1*/
     }
     for(i = 0; i < len; i++)      //��i=0��ʼ��λ��len         
    {
         for(j = 0; j < 10; j++)
         {
             if(n[i] == a[j])   //��� n[0]==a[0] 
             {
                 count[j]++;    //count[0]+1
                 break;
             }
         }
     }
     for(i = 0; i < 10; i++)
     {
        if(count[i] != 0)
        {
             printf("%d:%d\n", i, count[i]);
         }
     }
     return 0;
 }

