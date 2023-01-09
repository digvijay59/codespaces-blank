#include<stdio.h>
int swap(int *x,int *y,int *z)
{
    int t1,t2,t3;
    t1=*x;
    t2=*y;
    t3=*z;
    *x=t2;
    *y=t3;
    *z=t1;
}
int main()
{
    int a=5;
    int b=7;
    int c=9;
    swap(&a,&b,&c);
    printf("%d %d %d",a,b,c);
}