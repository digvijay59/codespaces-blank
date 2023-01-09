#include<stdio.h>
int main()
{
    float n;
    float a=1;
    float b=0;
    float s=0;
    printf("enter n for 1/1+1/2+1/4+1/7...1/n");
    scanf("%f",&n);
    while (n>0) 
    {
        b=b+1;
        printf("1/%f+",a);
        a=a+b;
        s=s+1/(a);
        n=n-1;
    }
    printf("\n");
    printf("%f",s);
    
}