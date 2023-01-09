#include<stdio.h>
struct student
{
    int roll;
    char name[100];
    union info
    {
        int adno;
        int passno;
    };
    union info in;
}s1[3];

void disp(struct student *k)
{
    for (int i = 0; i < 3; i++)
    {
        printf("roll=%d\n",(*(k+i)).roll);
        printf("name=%s\n",(*(k+i)).name);
        printf("adno=%d\n",(*(k+i)).in.adno);
        printf("passno=%d\n",(*(k+i)).in.passno);
    }
}

int main()
{
    for (int i=0;i<3;i++)
    {
        int n;
        printf("roll\n");
        scanf("%d",&s1[i].roll);
        printf("name\n");
        scanf("%s",&s1[i].name);
        getchar();
        printf("1foradno 0forpassno\n");
        scanf("%d",&n);
        if (n==1)
        {
            printf("adno");
            scanf("%d",&s1[i].in.adno);
        }
        if (n==0)
        {
            printf("passno");
            scanf("%d",&s1[i].in.passno);
        }
        
    }
    disp(&s1);

}
