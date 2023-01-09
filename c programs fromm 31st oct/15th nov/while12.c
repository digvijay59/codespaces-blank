#include<stdio.h>
int main()
{
    int n;
    printf("sun\tmon\ttue\twed\tthur\tfri\tsat");
    scanf("%d",&n);
    int i=1;
    int count=0;
    while(i<n){
        printf("\t");
        i++;
        count++;
    }
    int j=1;
    while (j<=31)
    {
        printf("%d\t",j);
        count++;
        if (count==7)
        {
            printf("\n");
            count=0;
        }
        j++;
    }
    
}