#include<stdio.h>
int swap(int,int);
int main()
{
int a1=20,a2=30;
printf("before swap a1=%d,a2=%d",a1,a2);
swap(a1,a2);
}
int swap(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
printf("\nafter swap  a1=%d,a2=%d",x,y);
}
