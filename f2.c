#include<stdio.h>
int main()
{
int a=200,b=120;
printf("a=%d b=%d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("\na=%d b=%d",a,b);
}
