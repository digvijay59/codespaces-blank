#include<stdio.h>
int main()
{
    int n;
    float a=0;
    float s=0;
    printf("enter n for 1/2+3/2+3/4+5/4...n");
    scanf("%d",&n);
    while (a<n) 
    {
        if (n%2!=0){
            s=s+n/(n+1);
        }
        else{
            s=s+n/(n+1/n);
        }
        a=a+1;
    }
    printf("\n");
    printf("%f",s);
    
}