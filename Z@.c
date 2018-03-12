#include <stdio.h>
int main()
{
    int i,j=0,j1=0;
   char c[100],a[100],b[100];
   gets(c);
  for(i=0;i<strlen(c);i++)
  {
      if(i%2!=0)
      {
          a[j]=c[i];
          j++;
      }
      else
      {
          b[j1]=c[i];
          j1++;
      }
  }
  printf("%s %s",a,b);
}
