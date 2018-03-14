#include <stdio.h>
#include<string.h>
int main()
{
    int i,j,temp,k;
   char a[100];
   gets(a);
   k=strlen(a);
  for(i=0;i<k;i++)
  {
      for(j=i+1;j<=k;j++)
      {
          if(a[i]>a[j])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
      }
  }
  for(i=0;i<=k;i++)
  {
  printf("%c",a[i]);
  }
  
}
