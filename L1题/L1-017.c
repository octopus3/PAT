//一个整数“犯二的程度”定义为该数字中包含2的个数与其位数的比值。如果这个数是负数，则程度增加0.5倍；如果还是个偶数，
//则再增加1倍。例如数字“-13142223336”是个11位数，其中有3个2，并且是负数，也是偶数，则它的犯二程度计算为：
//3/11*1.5*2*100%，约为81.82%。本题就请你计算一个给定整数到底有多二
//输入格式：
//输入第一行给出一个不超过50位的整数N。
//输出格式：
//在一行中输出N犯二的程度，保留小数点后两位。
//输入样例：
//-13142223336
//输出样例：
//81.82%

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char n[10000];//n输入的字符串 
	int  c,i;
	int count=0;
	double num;
	scanf("%s",n);
	int len;
	len  = strlen(n);
	for(i = 0; i < len; i++)      //从i=0开始到位数len         
      {
         if(n[i] == '2')   //如果 n[0]==a[0] 
          {
           count++;    //count为2的个数 
          }
    
      }
      sscanf(n,"%d",&c);
    if((c<0)&&(c%2==0))
    {
    	num = (double)count/(len-1)*1.5*2*100;
	}
	if((c>=0)&&(c%2==0))
	{
		num = (double)count/len*2*100;
	}
    if((c>=0)&&(c%2!=0))
    {
    	num = (double)count/len*100;
	}
	if((c<0)&&(c%2!=0))
	{
		num = (double)count/(len-1)*1.5*100;
	}
	printf("%.2lf%%",num);
	return 0;
}
