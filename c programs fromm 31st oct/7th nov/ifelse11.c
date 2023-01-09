#include<stdio.h>
int main()
{   
    float a,b,c,d,e,t1=0,t2=0,t3=0,t4=0,t5=0,total;
    printf("ENTER THE COST OF 5 ITEMS");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);

    if(a>3000){
        a=a-(0.30*a);
        printf("a=%f",a);
    }
    else if (a>2000)
    {
        a=a-(0.25*a);
        printf("a=%f",a);
    }
    else if (a>1000)
    {
        a=a-(0.20*a);
        printf("a=%f",a);
    }
    else{
        printf("a=%f",a);
    }
    /*if(b>3000){
        b=b-(0.30*b);
        t2=t2+b;
    }
    else if (b>2000)
    {
        b=b-(0.25*b);
        t2=t2+b;
    }
    else if (b>1000)
    {
        b=b-(0.20*b);
        t2=t2+b;
    }
    else{
        t2=t2+b;
    }
    if(c>3000){
        c=c-(0.30*c);
        t3=t3+c;
    }
    else if (c>2000)
    {
        c=c-(0.25*c);
        t3=t3+c;
    }
    else if (c>1000)
    {
        c=c-(0.20*c);
        t3=t3+c;
    }
    else{
        t3=t3+c;
    }
    if(d>3000){
        d=d-(0.30*d);
        t4=t4+d;
    }
    else if (d>2000)
    {
        d=d-(0.25*d);
        t4=t4+d;
    }
    else if (d>1000)
    {
        d=d-(0.20*d);
        t4=t4+d;
    }
    else{
        t4=t4+d;
    }
    if(e>3000){
        e=e-(0.30*e);
        t5=t5+e;
    }
    else if (e>2000)
    {
        e=e-(0.25*e);
        t5=t5+e;
    }
    else if (e>1000)
    {
        e=e-(0.20*e);
        t5=t5+e;
    }
    else{
        t5=t5+e;
    }
    total=a+b+c+d+e;
    printf("The total bill for 5 items is : %d",total);
    return 0;*/
    

    
}