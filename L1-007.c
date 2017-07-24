#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[11];
    int i;
    scanf("%s",a);
    for(i=0;i<11;i++)
    {
        switch(a[i])
	    {
        case '0':
        printf("ling");break;
        case '1':
        printf("yi");break;
     	case '2':
     	printf("er");break;
     	case '3':
     	printf("san");break;
    	case '4':
   	  	printf("si");break;
    	case '5':
   	    printf("wu");break;
   	    case '6':
   	    printf("liu");break;
    	case '7':
     	printf("qi");break;
     	case '8':
     	printf("ba");break;
     	case '9':
     	printf("jiu");break;
     	case '-':
     	printf("fu");break;
     	}
    if(a[i+1]>='0'&&a[i+1]<='9')printf(" ");
    }
    return 0;
}
