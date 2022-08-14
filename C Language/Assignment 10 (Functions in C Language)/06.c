#include<stdio.h>
int factorial(int);
int main(){
     int num;
     printf("Enter random number:-");
     scanf("%d",&num);

     printf("Factorial of %d = %d",num,factorial(num));

    return 0;
}
int factorial(int num){

    int fact=1;

    for(int i=1; i<=num;i++){
        fact= fact*i;
    }
    return fact;
    return fact;
}