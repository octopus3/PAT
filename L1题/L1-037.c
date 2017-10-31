#include<stdio.h>
int main()
{
	int a,b;
   float c;
   scanf("%d %d",&a,&b);
   c=(float)a/b;
   if(b!=0&&b>0)
   {
   printf("%d/%d=%.2f",a,b,c);
   }
   else if(b==0)
   {
   printf("%d/%d=Error",a,b);
   }
   else if(b!=0&&b<0)
   {
   printf("%d/(%d)=%.2f",a,b,c);
   }
  return 0;
}
