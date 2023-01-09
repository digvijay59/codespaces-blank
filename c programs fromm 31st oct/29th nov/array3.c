#include<stdio.h>
int main()
{
    int a[5];
    int b=11;
    int c=4;
    for (int i=0;i<5;i++)
    {
        a[i]=b;
        b=b-c;
        c=c-1;
    }
    for ( int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    
}