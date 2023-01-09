#include<stdio.h>
int even(int x)
{
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            if(j<=i)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
int odd(int x)
{
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            if(i<=j)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        even(n);
    }
    else
    {
        odd(n);
    }

}