#include<stdio.h>
int main()
{
    int a[100],i,temp,j,mid;
    for(i=0;i<=6;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=6;i++)
    {
        for(j=i+1;j<=6;j++)
        {
            if(a[i]>=a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
 for(i=0;i<=6;i++)
    {
      printf("%d",a[i]);
    }
   mid=6/2;
    printf("\n%d",a[mid]);
}
