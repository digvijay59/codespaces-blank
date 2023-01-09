#include<stdio.h>
int main()
{
    int n;
    int c=0;
    int m;
    printf("enter n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>=i)
            {
                c=c+1;
            }
        }
        printf("\n");
    }
    c=c+1;
    m=n;
    for(int i=1;i<=n;i++)
    {     
        if (i%2!=0)
        {
            c=c-1;
            for(int j=1;j<=m;j++)
            {
                printf("%d",c);
                c=c-1;
            }
            
        }
        else
        {
            c=c-(m-1);
            for(int j=1;j<=m;j++)
            {
                printf("%d",c);
                c=c+1;
            }
        }
        printf("\n");
        m=m-1;
    }
}