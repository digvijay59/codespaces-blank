#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter number of digits to be rouned off");
    scanf("%d",&c);
    if(c==1)
    {
        b=a%10;
        if(b<5)
        {
            a=a-b;
            printf("%d",a);
        }
        else
        {
            a=a+(10-b);
            printf("%d",a);
        }
    }
    else if(c==2)
    {
        b=a%100;
        if(b<50)
        {
            a=a-b;
            printf("%d",a);
        }
        else
        {
            a=a+(100-b);
            printf("%d",a);
        }
    }
    else if(c==3)
    {
        b=a%1000;
        if(b<500)
        {
            a=a-b;
            printf("%d",a);
        }
        else
        {
            a=a+(1000-b);
            printf("%d",a);
        }
    }
    else if(c==4)
    {
        b=a%10000;
        if(b<5000)
        {
            a=a-b;
            printf("%d",a);
        }
        else
        {
            a=a+(10000-b);
            printf("%d",a);
        }
    }
}