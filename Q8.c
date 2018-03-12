#include<stdio.h>
int main()
{
    int a,flage=0,i;
    scanf("%d",&a);
    for(i=2;i<=a-1;i++)
    {
        if(a%i==0)
        {
            flage=1;
        }
        
    }
    if(flage==1)
    {
     printf("yes");   
    }
    else
    {
        printf("No");
    }
    
}
