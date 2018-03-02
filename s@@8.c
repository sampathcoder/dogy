#include<stdio.h>
int main()
{
int a,b,k=0;
scanf("%d %d",&a,&b);
if(a<b)
{
    k=b-a;
}
else
{
    k=a-b;
}
if(k%2==0)
{
    printf("even");
}
else
{
    printf("odd");
}
}
