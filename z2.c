#include<stdio.h>
int main()
{
    char a[100],b[100];
    int flag=0,i,j,g=0;
    gets(a);
    for(i=0;i<=strlen(a)-1;i++)
    {
        for(j=i+1;j<=strlen(a);j++)
        {
            if(a[i]==a[j])
            {
                g=1;
            }
            
        }
    }
    if(g==1)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
}
   
