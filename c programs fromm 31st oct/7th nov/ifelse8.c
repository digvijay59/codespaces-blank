#include<stdio.h>
int main()
{   
    
    int a,b,c,hour;
    printf("enter a time in 24 hr format\n");
    scanf("%d:%d:%d",&a,&b,&c);
    if(a>12){
        a=a-12;
        printf("time is %d:%d:%d PM",a,b,c);
    }
    else{
        printf("time is %d:%d:%d AM",a,b,c);
    }
}