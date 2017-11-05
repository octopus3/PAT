#include<stdio.h>
#include<string.h>
int main()
{  
  char C[10000]; 
  int  sum[4]={0,0,0,0};  
  int i=0,len=0; 
  scanf("%s",C);
  len=strlen(C);  
  for(i=0;i<strlen(C);i++)
  {    
      switch(C[i])
        {      
      case 'G':
        sum[0]++;break;      
      case 'P':
        sum[1]++;break;      
      case 'L':
        sum[2]++;break;          
      case 'T':
        sum[3]++;break;      
      case 'g':
        sum[0]++;break;      
      case 'p':
        sum[1]++;break;      
      case 'l':
        sum[2]++;break;      
      case 't':
        sum[3]++;break;
    }
  }  
   while(sum[0]!=0||sum[1]!=0||sum[2]!=0||sum[3]!=0)
   {    
    for(i=0;i<4;i++)
    {      
      if(sum[i]!=0)
      {
          sum[i]--;        
          if(i==0)
          {
          printf("G");
          }       
          if(i==1)
          {
          printf("P");
          }        
         if(i==2)
         {
          printf("L");
         }        
         if(i==3)
         {
          printf("T");
         }
     }
    }
  }  
  return 0;
}
