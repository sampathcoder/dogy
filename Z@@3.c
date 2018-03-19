#include<stdio.h>
int main()
{
  int a,a1=1,b,i;
  scanf("%d%d",&a,&b);
  for(i=1;i<=b;i++)
  {
  a1=a1*a;
  }
  printf("%d",a1);
}
