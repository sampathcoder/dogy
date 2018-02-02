#include<stdio.h>
int main()
{
    int b,n=0,i,c,nm=0;
    char a[100]="samp.ath";
    char j;
    b=strlen(a);
    for(i=0;i<=10;i++)
    {
        if(a[i]=='.')
        {
            nm++;
        }
        /*for(j='a';j<='z';j++)
        {
        if(a[i]==j)
        {
            n++;
        }
        }*/
    }
   /* printf("ttl letters=%d\n",n);
    c=b-n;*/
    printf(" ttl prgf=%d",nm+1);

}

