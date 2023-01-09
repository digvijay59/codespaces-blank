#include<stdio.h>
int main()
{
    int a;
    int b;
    int n=0;
    int d;
    printf("enter a number");
    scanf("%d",&a);   
    d=a;
    while (a>0){
        b=a%10;
        a=(a-b)/10;
        n=n+1;
    }
    printf("the given number is %d\n",d);
    int f=n;
    while(d>0){
        int g=1; 
        while (n>1)
        {   
            g=g*10;
            n=n-1;
        }
        f=f-1;
        n=f;
        printf("%d\n",d/g);
        d=d%g;
    }
}