#include <stdio.h>
int main()
{
    int i,t,a[100];
    for(i=1;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }
 for(i=1;i<=9;i++)
 {
     t=a[1];
     if(t<a[i+1])
     {
         t=t;
     }
     else
     {
         t=a[i+1];
     }
     
 }
    printf("%d",t);
}
