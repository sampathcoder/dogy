#include<stdio.h>
#include<ctype.h>
int main()
{
  
    int a,b,temp;
    scanf("%d %d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d%d",a,b);
}
