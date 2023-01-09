#include<stdio.h>
int fibo(int x)
{
    int a = 0;
    int b = 1;
    int c = 0;
    printf("Fibonacci terms:\n");
    for(int i=1; i<=x; i++)
    {
        printf("%d, ", c);
        a = b;     
        b = c;     
        c = a + b; 
    }
    return 0;
}
int main()
{
    int n;
    printf("n: ");
    scanf("%d", &n);
    fibo(n);
}
