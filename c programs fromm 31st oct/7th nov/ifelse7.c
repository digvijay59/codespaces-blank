#include<stdio.h>
int main()
{   
    int a,b,c,d,e,f,g_year,h_mon,i_date;
    printf("enter 2 dates\n");
    scanf("%d/%d/%d",&a,&b,&c);
    scanf("%d/%d/%d",&d,&e,&f);
    g_year=f-c;
    if(g_year<0)
        {
            g_year=g_year*-1;
        }
    h_mon=e-b;
    if(h_mon<0)
        {
            h_mon=h_mon*-1;
        }
    i_date=d-a;
    if(i_date<0)
        {
            i_date=i_date*-1;
        }
    printf("difference is %d days %d months and %d years",i_date,h_mon,g_year);
}

    