#include<stdio.h>
int main()
{
    int b,n=0,i,c;
    char a[100]="samp ath";
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
    printf("ttl letters=%d\n",n);
    c=b-n;
    printf(" ttl space=%d",c);

}

