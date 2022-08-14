#include<stdio.h>

int main(){
    int a,sum =0;
    printf("Enter a three digit number:-");
    scanf("%d",&a);

    sum+= a%10;
    a= a/10;

     sum+= a%10;
    a= a/10;

     sum+= a%10;
    a= a/10;
    printf("Sum of 3 digit is %d",sum);
    return 0;
}