#include<stdio.h>
int main()
{
int a,c,count=0,i=3,a1[100];
scanf("%d",&a);
do
{
c=a%10;
a1[i]=c;
i--;
count++;
a=a/10;
}while(a!=0);
for(i=1;i<=3;i++)
{
printf("%d",a1[i]);
}
}
