#include<stdio.h>
#include<string.h>
int main()
{
	char a[10000],b[10000];
    int ASCA[255],i,f;
    gets(a);
    gets(b);
    for(i=0;i<strlen(b);i++)
    {
    	ASCA[b[i]]=1;
	}
	for(i=0;i<strlen(a);i++)
	{
		 f=0;
		if(ASCA[a[i]]==1)
		{
           f=1;
		   continue; 
		}
		if(!f)
		printf("%c",a[i]);
	}    
    return 0;
}
