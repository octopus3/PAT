#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long long gcd(long long a,long long b)    
{
	return b==0?a:gcd(b,a%b);          //定义寻找最大公约数的函数 
}
int main()
{
	int N,i;
    long long int a,b,suma=0,sumb=1,gcdvalue;  //定义分子 a ，分子b，中间分子数suma，中间分母数sumb，定义最大公约数gcdvalue 
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%lld/%lld",&a,&b);
		gcdvalue = (suma == 0 || sumb == 0) ? 1 : gcd(abs(suma), abs(sumb));  //判读分母是否为0 
        sumb = sumb / gcdvalue;                    //初始化部分 
        suma = suma / gcdvalue;
        gcdvalue = (a == 0 || b == 0) ? 1 : gcd(abs(a), abs(b));    //判断分母是否为0 
    /*1*/    a = a / gcdvalue;
    /*2*/    b = b / gcdvalue;
    /*3*/    suma = a * sumb + suma * b;     
    /*4*/    sumb = b * sumb;              
	}     //以上4行为模仿我们一般的解法 
	long long int integer = suma / sumb;
     suma = suma - (sumb * integer);
    gcdvalue = (suma == 0 || sumb == 0) ? 1 : gcd(abs(suma), abs(sumb));
    suma = suma / gcdvalue;
    sumb = sumb / gcdvalue;
    if(integer != 0)
	 {
        printf("%lld", integer);
        if(suma != 0)
            printf(" ");
    }
    if(suma != 0) 
	{
        printf("%lld/%lld", suma, sumb);
    }
    if(integer == 0 && suma == 0)
    printf("0");
	return 0;
}
