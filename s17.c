#include<stdio.h>
int main()
{

int k=1,i,j,flag=0,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
    k=k*2;

if(n==k)
{
flag=1;
}
}
}
if(flag==1)
{
    printf("yes");
}
else
{
    printf("no");
}
}
