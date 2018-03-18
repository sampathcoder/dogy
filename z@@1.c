#include <stdio.h>
#include<string.h>
int main()
{   int i,k,n,t,i1;
    char a[100],a1[100];
    gets(a);
    n=strlen(a);
    scanf("%d",&k);
    i1=n;
    for(i=0;i<=n;i++)
    {
       a1[i1]=a[i];
       i1--;
    }
    printf("%c",a1[k]);
    
}
