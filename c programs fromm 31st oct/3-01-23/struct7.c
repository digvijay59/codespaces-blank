#include <stdio.h>
union p{
    int d;
    char a[20];
    char b[4];

}p1;
int main()
{
    p1.b[0]=30;
    p1.a[1]=40;
    printf("%x",p1.d);
    return 0;

}