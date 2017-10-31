#include<stdio.h>
#include<string.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int sum=0,vis[10]={0};/*定义sum 定义标记数组vis*/
    int first=n;
    while(sum!=k)
    {
        memset(vis,0,sizeof(vis));
        sum=0;
        int a,b,c,d;
        a=n%10;
        if(!vis[a])
        {
            sum++;
            vis[a]=1;
        }
        b=(n/10)%10;
        if(!vis[b])
        {
            sum++;
            vis[b]=1;
        }
        c=(n/100)%10;
        if(!vis[c])
        {
            sum++;
            vis[c]=1;
        }
        d=(n/1000)%10;
        if(!vis[d])
        {
            sum++;
            vis[d]=1;
        }
        n++;
    }
    printf("%d %04d %d\n",n-first-1,n-1);
} 
