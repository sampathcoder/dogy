#include<stdio.h>
#include<string.h>
int main()
{
    char a[50]="sam5path";
    int i; char j;
    
    for(i=0;i<strlen(a);i++)
    {
        for(j='0';j<='9';j++)
    
        if(j==a[i])
        {
            printf("yes");
            printf("\n%c",a[i]);
        }
    }
}
