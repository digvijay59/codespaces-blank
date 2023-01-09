#include<stdio.h>
int main()
{
    int a[5]={1,2,4,7,11};
    int b[5];
    for (int i=0;i<5;i++)
    {
        b[i]=a[i];
    }
    for (int i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }
}