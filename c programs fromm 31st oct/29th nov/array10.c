#include<stdio.h>
int main()
{
    int a[10];
    int s;
    for(int i=0,s=1;i<=10;i++)
    {
        if(i==0 || i==1)
        {
            a[i]=s;
        }
        else
        {
            a[i]=a[i-1]+a[i-2];
        }
    }
    for (int i=0;i<10;i++)        
    {
        printf("%d\n",a[i]);
    }
        
    

}