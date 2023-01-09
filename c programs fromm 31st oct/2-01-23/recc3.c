#include<stdio.h>
int dispar(int *p,int q)
{
    if (q>0)
    {
        printf("%d\n",*p);
        dispar(p+1,q-1);
        printf("%d\n",*p);
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
    dispar(a,n);
}