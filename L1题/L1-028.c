#include<stdio.h>
#include<string.h>
#include<math.h>
int isprime(int a) 
{
	int i;
	if(a == 1)
		return 0;
	for(i = 2; i <= sqrt(a); i++) {
		if(a % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int num[10];
	int N,count[10]={0};
	int i,j=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&num[i]);
		if(isprime(num[i]))
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
}
