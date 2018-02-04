#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int b,n=0,i,c,m=0;
    char a[100]="sampath12/*-3";
    char j;
    b=strlen(a);
    for(i=0;i<=b;i++)
    {
        if(isalpha(a[i]))
        
        {
            n++;
        }
       else
        {
            m++;
        }
        
    }
    
    printf(" ttl another strings=%d",m-1);

}
