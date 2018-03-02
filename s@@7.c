#include<stdio.h>
int main()
{
int a,sum=1,n,i;
scanf("%d",&a);
for(i=1;i<100;i++)
{
    sum=sum*2;
    if(sum>a)
    {
    printf("%d",sum);
    break;
    }
    
}
}

