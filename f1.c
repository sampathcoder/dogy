#include<stdio.h>
int main()
{
int a=0,b=1,temp,c,n=0;
printf("%d%d",a,b);
do
{
c=a+b;
a=b;
b=c;
printf("%d",c);
n++;
}while(n!=5);
}
