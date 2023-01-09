#include<stdio.h>
int main()
{   
    int a,b,c,d,e,f,sec,min,hour;
    printf("enter 2 time\n");
    scanf("%d:%d:%d",&a,&b,&c);
    scanf("%d:%d:%d",&d,&e,&f);
    sec=f-c;
    if(sec<0)
        {
            sec=sec*-1;
        }
    min=e-b;
    if(min<0)
        {
            min=min*-1;
        }
    hour=d-a;
    if(hour<0)
        {
            hour=hour*-1;
        }
    printf("difference is %d hour %d min and %d sec",hour,min,sec);
}

    