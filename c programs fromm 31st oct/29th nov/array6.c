#include<stdio.h>
int main()
{
    int a[5]={1,2,4,7,11};
    int b;
    for (int i=0;i<5;i++)
    {
        a[i]=b;
        a[i]=a[i+1];
        a[i+1]=b;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }

}