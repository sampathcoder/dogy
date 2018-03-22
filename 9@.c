#include<stdio.h>
int main()
{
    int a,c,k=0;
    scanf("%d",&a);
    do
    {
    c=a%10;
    k++;
    a=a/10;
    }while(a!=0);
   printf("%d",k); 
}
