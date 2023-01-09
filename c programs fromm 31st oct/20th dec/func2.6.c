#include<stdio.h>
int total(int *a,int n)
{
    int m ;int sum=0;
    for ( int i = 0; i < n; i++)
    {
        m=*(a+i);
        sum=summation(m,sum);
    }
    return sum;
}
int summation(m,sum)
{
    sum=sum+m;
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for ( int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",total(a,n));
}