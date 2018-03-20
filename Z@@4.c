#include<stdio.h>
int main()
{
    int c,i,v;
    char a[100];
    gets(a);
    c=strlen(a);
    for(i=0;i<=c;i++)
    {
        v=a[i];
        if(v>96)
        {
        printf("%c",a[i]-32);
        }
        else
        {
          printf("%c",a[i]+32);  
        }
    }
}
