#include<stdio.h>
int main()
{
    int a[100],i,n,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    printf("%d",a[b]);
}
