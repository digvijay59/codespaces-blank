#include<stdio.h>
int main()
{
    int a;
    int n;
    int b;
    int c;
    printf("enter n");
    scanf("%d",&n);
    for(a=1,c=1;a<=n;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("%d ",c);
            c++;
        }
        printf("\n");
    }
}