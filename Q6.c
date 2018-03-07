#include<stdio.h>
int main()
{
    int c,k;
char a[100]="sampath";
c=strlen(a);
 k=c/2;
if(c%2==0)
{
   
    a[k]='*';
    a[k-1]='*';
    for(k=0;k<c;k++)
    {
    printf("%c",a[k]);    
    }
    }
else
{
    a[k]='*';
    for(k=0;k<c;k++)
    {
    printf("%c",a[k]);    
    }
}
}
