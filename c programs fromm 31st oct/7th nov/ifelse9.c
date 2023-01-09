#include<stdio.h>
int main()
{   
    int a,b,c,hour;
    char d,e;
    printf("enter a time in 12 hr format\n");
    scanf("%d:%d:%d%c%c",&a,&b,&c,&d,&e);
    if(d=='a'||d=='A'){

        printf("time is %d:%d:%d AM",a,b,c);
    }
    else{
        a=a+12;
        printf("time is %d:%d:%d PM",a,b,c);
    }
}