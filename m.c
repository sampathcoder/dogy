#include <stdio.h>

int main()
{
   int k=0,a,b[100],i,c;
   scanf("%d",&a);
   scanf("%d",&c);
   for(i=1;i<=a;i++)
   {
       scanf("%d",&b[i]);
   }
   for(i=1;i<=a;i++)
{
    if(b[i]==c)
    {
        k++;
    }
}
printf("%d",k);
}
