#include<stdio.h>
int ad2(float x)
{
    int y;
    y=(x*100);
    y=y%100;
    return y;
}
int main()
{
    float n;
    scanf("%f",&n);
    printf("%d",ad2(n));
}