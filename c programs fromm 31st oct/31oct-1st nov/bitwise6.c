#include<stdio.h>
int main()
{
    int a;
    printf("enter a integer\n");
    scanf("%x\n",&a);
    printf("the number entered is %x\n",a);

    int b;
    b=a&(0x0f000000);
    b=b>>20;
    int c;
    c=a&(0x000000f0);
    c=c>>4;
    int d;
    d=a&(0x00000f00);
    d=d>>4;
    int e;
    e=a&(0x00f00000);
    e=e>>20;
    int f;
    f=b|c;
    printf("%x\n",f);
    int g;
    g=d|e;
    printf("%x\n",g);
    printf("character one is %c\n",f);
    printf("character two is %c\n",g);
}