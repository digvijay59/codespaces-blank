#include<stdio.h>
int main()
{
    float n;
    float a=1;
    float b=2;
    float s=0;
    printf("enter n for 1/2+2/3+3/4+4/5...n");
    scanf("%f",&n);
    while (n>0) 
    {
        s=s+(a/b);
        a=a+1;
        b=b+1;
        n=n-1;
    }
    printf("\n");
    printf("%f",s);
    
}