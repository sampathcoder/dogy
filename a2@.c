#include<stdio.h>
#include<ctype.h>
int main()
{
    char a[100];
    int k=0,j=0,i;
    scanf("%s",&a);
    for(i=1;i<=strlen(a);i++)
    {
        if(isalpha(a[i]))
        {
            k=1;
        }
        if((a[i]<='9')&&(a[i]>='0'))
        {
            j=1;
        }
    }
    if((k==1)&&(j==1))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
