#include<stdio.h>
int print2d(int a[][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d|",a[i][j]);
        }
        printf("\n");
    }
}
int  main()
{
    
    int a[3][3];
    printf("enter the elements");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    print2d(a);
}