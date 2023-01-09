#include<stdio.h>
int main()
{   
    int a;
    printf("enter num");
    scanf("%d",&a);
    int b=a;
    int n=0;
    int c=1;
    while (b>0){  
        b=b/10;
        n=n+1;
    }
    if (n%2!=0){
        int p=(n/2)+1;

        while (c<p)
        {
            a=a/10;
            c++;
        }
        printf("middle digit is: %d",a%10);
        
    }
    else{
        int p=(n/2);
        printf("%d\n",p);

        while (c<p)
        {
            a=a/10;
            printf("%d",a);
            c++;
        }
        printf("middle digit is: %d",a%100);
    }
}