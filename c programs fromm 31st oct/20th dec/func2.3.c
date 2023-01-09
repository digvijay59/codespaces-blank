#include<stdio.h>
int max(int *a, int no)
{ 
    int i=0,j,k,l;
    for(j=0;j<no;j++){
       l=*(a+j);
       k=(l>i)?l:i;
       i=k;
    }
    return k;
}
int main(){
    int a[5]={1,9,3,4,5};
    int k;
    k=max(a,5);
    printf("%d is max",k);
}