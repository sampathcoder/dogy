#include<stdio.h>
int main()
{
   int a[100],i,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=1;i<=n-1;i++)
   {
       a[i]++;
       if(a[i]==a[i+1])
       {
           
       }
       else
       {
           printf("%d\t",a[i]);
           a[i+1]=a[i];
          
       }
   }
}
