#include<stdio.h>
int main()
{
    int a;
    int sum=0;
    printf("enter num");
    
    int b=0;
    while (b<10)
    {
        scanf("%d",&a);
        sum=sum+a;
        b++;
    }
    printf("sum is %d",sum);
    
}