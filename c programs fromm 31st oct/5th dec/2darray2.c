#include<stdio.h>
int main()
{
    int x;
    int y;
    scanf("%d",&x);
    scanf("%d",&y);
    int a[x][y];
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {
            printf("%d|",a[i][j]);
        }
        printf("\n");
    }   

}