#include<stdio.h>
#include<math.h>
int main()
{
	float H;/*�������H*/
	float Weigh;
	scanf("%f",&H);
	Weigh=(H-100)*0.9*2;
	printf("%.1f",Weigh);
	return 0;
}
