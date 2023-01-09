#include<stdio.h>
int main()
{
    int a[]={1,9,6,8,4,3};
    int b[6];
    for (int i=0,j=3;i<3;i++,j++)
    {
        b[i]=a[j];
    }
    for (int i=3,j=0;i<6;i++,j++)
    {
        b[i]=a[j];
    }
    for (int i=0;i<6;i++)        
    {
        printf("%d\n",b[i]);
    }
}
