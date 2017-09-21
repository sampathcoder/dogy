#include<stdio.h>
int main()
{
int a,n,b,c,s=0;

for(n=1;n<=10;n++)
{
b=n;
while(n>0)
{
a=n%10;
c=a*a*a;
s=s+c;
n=n/10;
}
if(s==b)
{
printf("%d",s);
}
else
{
    printf(".");
}
}
}

