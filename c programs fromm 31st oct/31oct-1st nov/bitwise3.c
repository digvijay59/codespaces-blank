#include<stdio.h>
int main()
{
    char a;
    printf("enter a character");
    scanf("%c",&a);
    printf("%x\n",a);

    int b;
    b=a&(0x0f);
    b=b<<4;
    int c;
    c=a&(0xf0);
    c=c>>4;
    int d;
    d=b|c;

    printf("%x\n",d);

}