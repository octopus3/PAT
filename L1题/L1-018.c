#include<stdio.h>
int main() 
{
    int hour, min;
    int i;
    scanf("%d:%d", &hour, &min);
    if(hour <= 12) 
	{
        printf("Only %02d:%02d.  Too early to Dang.", hour, min);
    } 
	else
	 {
           hour -= 12;
           for(i = 0; i < hour; i++)
           printf("Dang");
           if(min > 0)
           printf("Dang");
    }
    return 0;
}
