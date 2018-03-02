#include<stdio.h>
int main()
{
   char a[100]="01110101";
   int i,f=0;
   for(i=0;i<strlen(a);i++)
   {
       if((a[i]=='0')||(a[i]=='1'))
       {
           f=1;
       }
       else
       {
          f=0;
       }
   }
   if(f==1)
   {
        printf("yes");
   }
   else
   {
       printf("no");
   }
}
    
