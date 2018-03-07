#include<stdio.h>
int main()
{
    int i,n,flag=0;
    char a[100];
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            flag=1;
        }
    }
    
        if(flag==1)
        {
        printf("yes");
        }
        else
        {
            printf("no");
        }
        
}
