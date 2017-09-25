#include<stdio.h>
int main()
{
   int a=0,b=1,t,i;
   printf("%d",a);
     printf("%d",b);
 for(i=0;i<=20;i++)
   {
       t=a+b;
       a=b;
       b=t;
printf("\t%d\n",t);
      }
}
