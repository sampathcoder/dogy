#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,count=0;
   char a[100]="sampath kettavan";
   for(i=0;i<strlen(a);i++)
   {
       if(isspace(a[i]))
       {
           count++;
       }
   }
printf("%d",count+1);
}
    
