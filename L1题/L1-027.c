#include<stdio.h>
#include<string.h>
void paixu(int a[])
{
	int i,j,temp;
	for(i=0;i<11;i++)
	{
		for(j=0;j<11-i-1;j++)
		{
			if(a[j]>a[j+1])
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
int main()
{
	char number[11];
	int index[10];
	int arr[11];
	int i;
	scanf("%s",number);
	for(i=0;i<11;i++)
    {
      switch(number[i])
      {
      	case '0':
      		arr[i]=number[i]-'0';
      		break;
      	case '1':
      		arr[i]=number[i]-'0';
      		break;
      	case '2':
      		arr[i]=number[i]-'0';
      		break;
		case '3':
      		arr[i]=number[i]-'0';
      		break;	
		case '4':
      		arr[i]=number[i]-'0';
      		break;
		case '5':
      		arr[i]=number[i]-'0';
      		break;
		case '6':
      		arr[i]=number[i]-'0';
      		break;
		case '7':
      		arr[i]=number[i]-'0';
      		break;
		case '8':
      		arr[i]=number[i]-'0';
      		break;
		case '9':
      		arr[i]=number[i]-'0';
      		break;		  		  		  		  		  	  	
	  }
    }
    paixu(arr);
}

