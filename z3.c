#include<stdio.h>
int main()
{
int a,a1[100],j,i,k,b,g,g1;
scanf("%d%d",&a,&b);
for(i=2;i<a&&i<b;i++)
{
    g=a%i;
    g1=a%i;
    if((g==0)&&(g1==0))
    {
        a1[j]=i;
        k=j;
        j++;
    }
}
printf("%d",a1[k]);
}
   
