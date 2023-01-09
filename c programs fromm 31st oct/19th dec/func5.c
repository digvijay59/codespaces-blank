#include<stdio.h>
int p1(char sym,int no)
{
    for(int i=0;i<no;i++)
    {
        for(int j=0;j<no;j++)
        {
            if(i<=j)
            {
                printf("%c",sym);
            }
        }
        printf("\n");
    }
    return;
}

int p2(char sym,int no)
{
    for(int i=0;i<no;i++)
    {
        for(int j=0;j<no;j++)
        {
            if(j<=i)
            {
                printf("%c",sym);
            }
        }
        printf("\n");
    }
    return;
}
int main()
{
    char ch1;
    int n1;
    scanf("%c",&ch1);
    scanf("%d",&n1);
    

    char ch2;
    int n2;

    getchar();
    scanf("%c",&ch2);
    getchar();
    scanf("%d",&n2);
    
    char ch3;
    int n3;
    getchar();
    scanf("%c",&ch3);
    getchar();
    scanf("%d",&n3);
    printf("AB\n");
    p1(ch1,n1);
    
    printf("BC\n");
    p2(ch2,n2);

    printf("CD\n");
    p2(ch3,n3);

}