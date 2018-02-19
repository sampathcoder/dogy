#include<stdio.h>
int main()
{
int a=123,c,count=0;
do
{
c=a%10;
if((c<=9)&&(c>=0))
{
count++;
}
a=a/10;
}while(a!=0);
printf("%d",count);
}
