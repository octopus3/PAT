#include<stdio.h>    /*本题注意相等的情况，否则可能会部分正确*/

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>=b)
	{
		if(b>=c)
	    printf("%d->%d->%d",c,b,a);
	    if(b<c&&a>c)
	    printf("%d->%d->%d",b,c,a);
	    if(b<c&&a<=c)
	    printf("%d->%d->%d",b,a,c);
	}
	 else if(a<=b)
	{
	   if(a>=c)
	   {
	   	printf("%d->%d->%d",c,a,b);
	   }
	   if(a<c&&b>=c)
	   {
	   	printf("%d->%d->%d",a,c,b);
	   }  
	   if(a<c&&b<c)
	   printf("%d->%d->%d",a,b,c);	
	}
	else if(c>=a)
	{
		if(a>=b)
		printf("%d->%d->%d",b,a,c);
		if(a<b&&c>b)
		printf("%d->%d->%d",a,b,c);
		if(a<b&&c<=b)
		printf("%d->%d->%d",a,c,b);
	}
	
	return 0;
}
