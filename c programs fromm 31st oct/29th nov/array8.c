#include<stdio.h>
int main()
{
    int a[]={1,9,6,8,4,3};
    int b[6];
    for (int i=0;i<6;i++)
    {
        if(i==0)
        {
            b[i]=a[i];
        }
        else
        {
            b[i]=b[i-1]+a[i];
        }
    }
    for (int i=0;i<6;i++)        
    {
        printf("%d\n",b[i]);
    }
    

}