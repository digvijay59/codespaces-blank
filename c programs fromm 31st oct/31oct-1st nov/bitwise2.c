#include<stdio.h>
int main()
{   
    int a;
    printf("enter an integer");
    scanf("%i",&a);
    printf("%x\n",a);

    int b;
    printf("third bit is----");
    b=a&(0x4);
    b>>2;
    printf("%d\n",b);

    printf("ninth bit is----");
    b=a&(0x100);
    b=b>>8;
    printf("%d\n",b);

    printf("seventeenth bit is----");
    b=a&(0x10000);
    b=b>>16;
    printf("%d\n",b);



}