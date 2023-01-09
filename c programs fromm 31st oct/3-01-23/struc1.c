#include<stdio.h>
struct student
{
    char name[100];
    int roll;
    float mark1;
    float mark2;
    int age;

}s1;

int main()
{
    scanf("%s",&s1.name);
    scanf("%d",&s1.roll);
    scanf("%d",&s1.age);
    scanf("%f",&s1.mark1);
    scanf("%f",&s1.mark2);

    printf("name=%s\n",s1.name);
    printf("roll=%d\n",s1.roll);
    printf("age=%d\n",s1.age);
    printf("mark1=%f\n",s1.mark1);
    printf("mark2=%f\n",s1.mark2);

}
