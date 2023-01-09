#include<stdio.h>
struct student
{
    char name[100];
    int roll;
    float mark1;
    float mark2;
    int age;

}s1;

void read(struct student *k,char s1[])
{
    char e[100];
    int a;
    int b;
    float c;
    float d;
    scanf("%s",&(k->name));
    scanf("%d",&a);
    k->roll=a;
    scanf("%d",&b);
    k->age=b;
    scanf("%f",&c);
    k->mark1=c;
    scanf("%f",&d);
    k->mark2=d;
}

int main()
{
    read(&s1,s1.name);
    
    printf("name=%s\n",s1.name);
    printf("roll=%d\n",s1.roll);
    printf("age=%d\n",s1.age);
    printf("mark1=%f\n",s1.mark1);
    printf("mark2=%f\n",s1.mark2);

}
