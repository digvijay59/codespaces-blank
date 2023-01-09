#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter an integer\n");
    scanf("%i",&a);
    printf("%x\n",a);

    b=a&(0x000000ff);
    printf("%x\n",b);

    c=a&(0x0000ff00);
    c=c>>8;
    printf("%x\n",c);

    d=a&(0x00ff0000);
    d=d>>16;
    printf("%x\n",d);

    e=a&(0xff000000);
    e=e>>24;
    printf("%x\n",e);

}

