#include<stdio.h>
int dispno(int p)
{
    if(p>0)
    {
        dispno(p/10);
        printf("%d\n",p%10);
    }
    
}
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    dispno(n);
}