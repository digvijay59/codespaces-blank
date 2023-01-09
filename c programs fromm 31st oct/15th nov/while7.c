#include<stdio.h>
int main()
{
    float n;
    int a=0;
    float s=0;
    printf("enter n for 1/1+2/1+1/3+4/1...1/n");
    scanf("%f",&n);
    while (n>0) 
    {
        a=a+1;
        if (a%2==0){
            s=s+a;
        }
        else{
            s=s+1/(a);
        }
        n=n-1;
    }
    printf("\n");
    printf("%f",s);
    
}