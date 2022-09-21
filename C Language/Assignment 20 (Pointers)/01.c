#include<stdio.h>
void swap(int *p, int *q){
    int t;
    
    t= *p;
    *p= *q;
    *q= t;
    // *p = *p+q-(*q=*p);
    printf("a = %d\nb = %d\n",*p,*q);
}
void input(int *p, int *q){
    printf("Enter value of 2 variables::");
    scanf("%d%d",p,q);
}
int main(){
  
    
    int a ,b;

    input(&a,&b);  swap(&a,&b);
  
    return 0;
}