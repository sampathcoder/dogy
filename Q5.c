#include<stdio.h>
int main()
{
    int c,k,k1,flag=0,n,i;
    scanf("%d%d",&c,&k);
    k1=c*k;
    for(i=1;i<=k1;i++)
    {
        n=i*i;
        if(n==k1)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("perfect square");
    }
    else
    {
        printf("not a perfect squre");
    }

}

