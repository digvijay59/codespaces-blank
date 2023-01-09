#include<stdio.h>
int sum(m)
{
    if (m>0)
    {
        return m+sum(m-1);
    }

}
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("%d",sum(n));
}