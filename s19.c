#include<stdio.h>
int main()
{

int c,a=0,i,n,b[100];
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&b[i]);
a=a+b[i];
}
c=a/n;
printf("%d",c);
}
