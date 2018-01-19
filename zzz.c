#include<stdio.h>
int main()
{
int a[100],i,big=a[1];
for(i=1;i<=3;i++)
{
scanf("%d",&a[i]);
}
for(i=2;i<=3;i++)
{
if(big<a[i])
{
big=a[i];
}
}
printf("%d",big):
}
