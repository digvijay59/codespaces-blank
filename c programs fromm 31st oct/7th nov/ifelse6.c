#include<stdio.h>
int main()
{   
    int a,b,c,d,e,f;
    printf("enter 2 dates\n");
    scanf("%d/%d/%d",&a,&b,&c);
    scanf("%d/%d/%d",&d,&e,&f);
    if(c<f)
    {
        printf("%d/%d/%d is the earliest\n",a,b,c);
    }
    else
    {
        printf("%d/%d/%d is the earliest\n",d,e,f);
    }
    if(c==f)
    {
        if(b<e)
        {
            printf("%d/%d/%d is the earliest\n",a,b,c);
        }
        else
        {
            printf("%d/%d/%d is the earliest\n",d,e,f);
        }
        if(b==e)
        {
            if(a<d)
            {
                printf("%d/%d/%d is the earliest\n",a,b,c);
            }
            else
            {
                printf("%d/%d/%d is the earliest\n",d,e,f);
            }
        }
        
    }
}