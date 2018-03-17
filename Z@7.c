#include<stdio.h>
int main()
{
   int a,c1=1,c,k;
   scanf("%d",&a);
   do
   {
       c=a%10;
       k=c;
       a=a/10;
       c1=c1*k;
   }while(a!=0);
   printf("%d",c1);
}
