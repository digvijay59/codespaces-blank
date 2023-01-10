#include<stdio.h>
struct nn{
    int roll;
    int age;
    int marks[4];
}s1;
int main()
{
    double avg,total;
    printf("enter roll ");
    scanf("%d",&s1.roll);
    printf("enter age ");
    scanf("%d",&s1.age);
    for(int i=0;i<4;i++){
        printf("enter marks ");
        scanf("%d",&s1.marks[i]);
    }
    int max=s1.marks[0];
    int min=s1.marks[0];
    for(int i=0;i<4;i++){
        if(s1.marks[i]>max)
            max=s1.marks[i];
        if(s1.marks[i]<min)
            min=s1.marks[i];
        total+=s1.marks[i];
   }
    avg=total/4.0;
    printf("maximum is %d ",max);
    printf("minimum is %d ",min);
    printf("average is %lf",avg);
    printf("total is %lf",total);
    return 0;
}