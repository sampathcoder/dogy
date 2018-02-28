#include<stdio.h>
int main()
{
int a,c,a1;
scanf("%d",&a);
do
{
c=a%10;
a1=a1+c;
a=a/10;
}while(a!=0);


printf("%d",a1);

}
