#include<stdio.h>
#include<string.h>
int main()
{
    int m,i,j;
    char a[100];
    scanf("%s",&a);
    m=strlen(a);
    for(i=0;i<m;i++)
    {
        for(j='0';j<='9';j++)
        {
        if(a[i]==j)
        {
            printf("%c",a[i]);
        }
    }
    }
  
}
