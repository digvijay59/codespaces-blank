#include<stdio.h>
int no=0;
int dispno(int p)
{
    if(p>0)
    {   
        no=(no*10)+p%10;
        dispno(p/10);
    }
    
}
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    dispno(n);
    printf("%d",no);
}