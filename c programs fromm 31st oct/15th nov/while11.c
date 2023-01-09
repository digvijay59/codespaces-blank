#include<stdio.h>
int main()
{
    int n;
    int a=1;
    float s=0;
    printf("enter n for 1/1!+1/2!+1/3!+1/4!...1/n!");
    scanf("%d",&n);
    while (a<n)
    {
        if (a%2!=0)
        {
            int b=n;
        int f=1;
        while(b>=1)
        {
            f=f*b;
            b--;
        }
        s=s+(1.0/f);
        n--;
        }
        else
        {
            s=s+(1/a);
        }
        
    }
    printf("sum=%f",s+1);
    
}