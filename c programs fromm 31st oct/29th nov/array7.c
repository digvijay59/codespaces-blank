#include<stdio.h>
int main()
{
    int a[10];
    for (int i=0,j=1,m=5;i<=9;i++,j++)
    {
        a[i]=j*m;
    }
    for (int i = 0; i <=9; i++)        
    {
        printf(" %d",a[i]);
    }
    

}