#include<stdio.h>
int sum1=0;
int sum2=0;
int disp_ar(int *p,int q)
{
    if (q>0)
    {
        if(*p%2==0)
        {
            sum2 =sum2+*p;
        }
        sum1 =sum1+*p;
        disp_ar(p+1,q-1);
    }
}
int main()
{
    int n;
    printf("enter length of array");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    disp_ar(a,n);
    printf("sum=%d\n",sum1);
    printf("sum of even=%d",sum2);
}