#include <stdio.h>
int gcd(int a, int b)
{
    int i,k,min;
    min=(a<b)?a:b;
    for(i=1;i<=min;i++)
    {
        if (a%i==0&&b%i==0)
        {
            k = i;
        }
    }
    return k;
}
int main()
{
    int a, b, m;
    printf("enter two no.:");
    scanf("%d %d",&a,&b);
    m = gcd(a, b);
    printf("the gcd is %d", m);
    return 0;
}