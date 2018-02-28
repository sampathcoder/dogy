#include<stdio.h>
#include<ctype.h>
int main()
{
  
    int a[100],i,n=10,k=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]>=k)
        {
            k=a[i];
        }
    }
    printf("%d",k);
}

 
