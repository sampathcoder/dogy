#include<stdio.h>
int main()
{
int n,b,c,s=0;
scanf("%d",&n);
b=n;
while(n!=0)
{
n=n%10;
c=n*n*n;
s=s+c;
n=n/10;
}
if(s==b)
{
printf("it is armstrong number")
}
else
{
printf("not a armstrong number");
}
}
