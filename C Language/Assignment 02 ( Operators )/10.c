#include<stdio.h>

int main(){
    int x= 2356,remainder;
     remainder=x%10;
     x= x- remainder;
     printf("%d ", x);
    return 0;
}