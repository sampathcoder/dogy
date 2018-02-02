#include<stdio.h>
int main()
{
    int b,n=0,i;
    char a[100]="sampath";
    char j;
    b=strlen(a);
    for(i=0;i<=10;i++)
    {
        for(j='a';j<='z';j++)
        {
        if(a[i]==j)
        {
            n++;
        }
        }
    }
    printf("%d",b);
}
