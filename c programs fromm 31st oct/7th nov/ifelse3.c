#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if (a<0)
    {
        a=a*-1;
        printf("absolute value is %d",a);

    }
    else 
    {
        printf("absolute value is %d",a);
    }
    
    
}