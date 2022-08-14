#include<stdio.h>

int main(){
    int a=10 ,b= 20,temp;
    temp = a;
    a = b;
    b = temp;
    
    printf("a = %d  b = %d",a,b);
    return 0;
}