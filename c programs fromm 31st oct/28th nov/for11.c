#include<stdio.h>
int main()
{
    int a;
    int n;
    int b,m;
    printf("enter n");
    scanf("%d",&n);
    m=n;
    for(a=1;a<=n+1;a++)
    {
        for(b=1;b<=m;b++)
        {
            printf(" ");    
        }
        m=m-1;
        
        for(int i=1;i<=n;i++)
        {
            if (i>=b)
            {
                printf(" |");
            }
            
            
        }
        printf("\n");
    }
    
}