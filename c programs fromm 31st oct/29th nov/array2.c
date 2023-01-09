#include<stdio.h>
int main()
{
    int a[5];
    int b=1;
    for (int i=0;i<5;i++)
    {
        b=b+i;
        a[i]=b;
    }
    for ( int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    
}