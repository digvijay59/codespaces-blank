#include<stdio.h>
struct date
{
    int dd;
    int mm;
    int yy;

}d1;

int read(struct date *k)
{
    int yy;
    int age;
    yy=(*k).yy;
    age = 23-yy;
    return age;

}

int main()
{
    scanf("%d/%d/%d",&d1.dd,&d1.mm,&d1.yy);
    printf("age=%d",read(&d1));
}
