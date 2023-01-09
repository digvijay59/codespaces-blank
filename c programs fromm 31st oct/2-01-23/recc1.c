#include<stdio.h>
int disp(m)
{
    if(m>0)
    {
        printf("%d\n",m);
        disp(m-1);
        printf("\n");
        printf("%d",m);
    }
    
}
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    disp(n);
}