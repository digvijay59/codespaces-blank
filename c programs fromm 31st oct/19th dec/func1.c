#include<stdio.h>
int mult(int a)
{
    for(int i=0;i<=10;i++)
    {
        printf("%d*%d=%d\n",a,i,a*i);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    mult(n);
}