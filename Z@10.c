#include <stdio.h>

int main()
{
    int a,c;
    scanf("%d",&a);
do
{
    c=a%10;
    printf("%d",c);
    a=a/10;
}while(a!=0);
  
}
