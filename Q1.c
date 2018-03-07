#include<stdio.h>
int main()
{
    int k,n,i,f=0,l; 
    char a[100];
    gets(a);
    n=strlen(a);
    k=n;
    l=n-1;
    for(i=0;i<n;i++)
    {
        if(a[i]==a[l])
        {
            f++;
        }
        l--;
    }
    if(f==k)
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
}

