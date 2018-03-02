#include<stdio.h>
int main()
{
    char s[100]="sampath;;";
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==';')
        {
            s[i]='\0';
        }
    }
    printf("%s",s);
}
    
