#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 ,2 digit hexadecimal numbers\n");
    scanf("%x\n",&a);
    scanf("%x\n",&b);
    printf("the numbers are %x and %x\n",a,b);

    int c;
    c=a&(0xf0);
    c=c<<4;
    int d;
    d=a&(0x0f);
    d=d<<4;
    int e;
    e=b&(0xf0);
    e=e>>4;
    int f;
    f=b&(0x0f);
    f=f<<12;
    int g;
    g=c|d|e|f;
    printf("%x",g);
}