#include<stdio.h>
int main()
{
    int b,n=0,i,c,nm=0;
    char a[100]="samp1234ath";
    char j;
    b=strlen(a);
    for(i=0;i<=b;i++)
    {
       
        for(j='0';j<='9';j++)
        {
        if(a[i]==j)
        {
            n++;
        }
        }
    }
   
    printf(" ttl numeric in =%d",n);

}

