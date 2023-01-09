#include<stdio.h>
int main()
{   
    int a;
    printf("enter an integer");
    scanf("%d",&a);
    printf("%x\n",a);

    int b;
    b=a&(0x000000ff);
    b=b<<24;

    int c;
    c=a&(0x0000ff00);
    c=c<<8;

    int d;
    d=a&(0x00ff0000);
    d=d>>8;

    int e;
    e=a&(0xff000000);
    e=e>>24;
    
    e=b|c|d|e;
    printf("%x\n",e);


}