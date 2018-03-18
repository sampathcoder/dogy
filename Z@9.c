#include <stdio.h>

int main()
{
    int a,flag=0,i,f=0;
    scanf("%d",&a);
    for(i=2;i<a-1;i++)
    {
        if(a%i==0)
        {
            f++;
        }
        else
        {
            flag=0;
        }
    }
    if(f==0)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
  
}
