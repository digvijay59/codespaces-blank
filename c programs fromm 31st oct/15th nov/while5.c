#include<stdio.h>
int main()
{
    printf("enter n for 1/1+1/3+1/7+....1/n\n");
    int n;
    scanf("%d",&n);
    float e=0;
    float a=1;
    while (n>0)
    {
        printf("1/%f+",a);
        e=e+(1/a);
        a=a+2;
        n=n-1;
    }
    printf("\n");
    printf("sum=%f",e);

}