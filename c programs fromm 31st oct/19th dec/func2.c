#include<stdio.h>
int last2(int x)
{
    int y;
    y=x%100;
    return y;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",last2(n));
}