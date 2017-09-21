#include<stdio.h>
int main()
{
int i,s,k;
for(k=1;k<=10;k++)
{
for(i=1;i<=20;i++)
{
s=i*k;
printf("%d*%d=%d\n",i,k,s);
}
}
}
