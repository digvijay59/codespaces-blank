#include<stdio.h>
int main()
{
    int count=1;
    int a[2][3];
    for (int j=0;j<3;j++)
    {
        for (int i=1;i>=0;i--)
        {
            scanf("%d",&a[i][j]);
            count++;
        }
    }
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }   

}