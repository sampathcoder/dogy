#include<stdio.h>
#include<string.h>
int main()
{
    int d,k=0,i,c,m,f,k1;
    char a[100],r;
    gets(a);
    c=strlen(a);
    for(i=0;i<c;i++)
    {
        r=a[i];
        switch(r)
        {
            case 'i':case 'I':
                    d=1;
                    break;
            case 'v':case 'V':
                    d=5;
                    break;
            case 'x':case 'X':
                    d=10;
                    break;
            case 'l':case 'L':
                    d=50;
                    break;
            case 'c':case 'C':
                    d=100;
                    break;
            case 'd':case 'D':
                    d=500;
                    break;
            case 'm':case 'M':
                    d=1000;
                    break;
        }
        if(i==0)
        {
            k=d;
        }
        if((i!=0)&&(f<d))
        {
               k1=d-f;
               k=k-f;
               k=k+k1;
        }
        else if(i!=0)
        {
           k=m+d; 
        }
        m=k;
        f=d;
        
    }
    printf("%d",k);
}
