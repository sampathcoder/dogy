#include<stdio.h>
int main()
{

int c,a[100],i,j,swap,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
    for(j=i+1;j<=n;j++)
    {
        if(a[i]>=a[j])
        {
            swap=a[i];
            a[i]=a[j];
            a[j]=swap;
        }
    }
}
printf("%d %d",a[1],a[n]);
}
