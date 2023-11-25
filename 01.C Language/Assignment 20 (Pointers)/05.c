#include<stdio.h>
void input(int *p, int *q){
    printf("Enter value of 2 variables::");
    scanf("%d%d",p,q);
}
int max_num(int*p ,int*q){
    if(*p>*q)
     return *p;

     else 
       return *q;
     
    
}
int main(){
    int a,b;
    input(&a,&b);
    printf("Max no. = %d",max_num(&a,&b));


    return 0;
}