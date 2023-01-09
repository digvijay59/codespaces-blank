#include<stdio.h>
int main()
{
    int a;
    int n;
    int b,m;
    printf("enter n");
    scanf("%d",&n);
    m=n;
    for(a=1;a<=n;a++)
    {
        if(a%2!=0){
            for(b=1;b<=m;b++)
            {
                printf("%d",b);    
            }
            m=m-1;
            printf("\n");
        }
            
        else{
            for(b=m;b>=1;b--)
            {
                printf("%d",b);       
            }
            m=m-1;
            printf("\n");
        }
    }
}