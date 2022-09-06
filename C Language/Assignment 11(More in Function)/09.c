#include<stdio.h>
int square(int x){
    return x*x;
}

int main(){
    int num;
    printf("Enter value of num::");
    scanf("%d",&num);

    printf("Square of %d = %d ",num,square(num));
    return 0;
    return 0;
}