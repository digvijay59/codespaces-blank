#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if (a/10<1)     
    {
        printf("number has 1 digit");
    }
    else if(a/100<1)
    {
        printf("number has 2 digits");
    }
    else if (a/1000<1)
    {
        printf("number has 3 digits");
    }
    else if (a/10000<1)
    {
        printf("number has 4 digits");
    }
    else if (a/100000<1)
    {
        printf("number has 5 digits");
    }
    
}