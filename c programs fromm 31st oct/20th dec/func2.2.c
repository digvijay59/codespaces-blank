#include<stdio.h>
operation(int a,int b,int c,int *p,int *q)
{
    int max,min,avg;
    max = a>b ? (a>c ? a : c) : (b>c ? b : c);
    min = a<b ? (a<c ? a : c) : (b<c ? b : c);
    avg = (a + b + c)/3;
    *p=min;
    *q=avg;
    return max;
}
int main()
{
    int a,b,c,min,max,avg;
    scanf("%d",&a);
    getchar();
    scanf("%d",&b);
    getchar();
    scanf("%d",&c);
    max= operation(a,b,c,&min,&avg);
    printf("max= %d",max);
    printf("min= %d",min);
    printf("avg= %d",avg);
}