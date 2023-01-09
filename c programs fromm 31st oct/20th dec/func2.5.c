#include<stdio.h>
int sum(x,y)
{
    int s;
    s=x+y;
}
int main()
{
    int a,b;
    scanf("%d",&a);
    getchar();
    scanf("%d",&b);
    printf("%d",sum(a,b));
}