#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    if(a%2==0)
    {
        c=a/2;
        printf("%d",c);
    }
    else
    {
        printf("%d",a);
    }
    if(b%2==0)
    {
        d=b/2;
        printf("%d",d);
    }
     else
    {
        printf("\n%d",b);
    }
}
