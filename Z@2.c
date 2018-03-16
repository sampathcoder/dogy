#include<stdio.h>
#include<string.h>
int main()
{
    int a[100],i,c=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        c=c+a[i];
    }
    printf("%d",c);
   
}
