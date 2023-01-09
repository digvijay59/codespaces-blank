#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the no of rows : ");
    scanf("%d",&n);
    if (n>0 && n<=8){
    for (i=1;i<=n;i++)
    {
        for (j=i;j<n;j++)
        {
            printf(" ");

        }
        for (j=1;j<=i;j++)
        {
            printf("#");
        }
        printf("\n");
    }
    }
    else 
    printf("Enter value again and try");

    printf

}