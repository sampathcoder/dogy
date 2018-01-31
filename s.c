#include<stdio.h>
#include<ctype.h>
int main()
{
int b=0,a,i;
char s1[100]="sampath hai";
a=strlen(s1);
for(i=1;i<=a;i++)
{
if(isalpha(s1[i]))
{
b++;
}
}
printf("%d",b);
}
