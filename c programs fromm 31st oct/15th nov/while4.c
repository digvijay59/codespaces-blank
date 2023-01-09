#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("enter a number");
    scanf("%d",&a);   
    while (a>0){
        b=a%10;
        a=(a-b)/10;
        printf("%d",b);
    }
}