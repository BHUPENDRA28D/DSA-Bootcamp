#include<stdio.h>

int main(){
   
    int n,fact=1;
    printf("Enter value of n:-");
    scanf("%d",&n);

    for(int i =0; i<n;i++){
        // fact =fact*i;
        fact =fact*(n-i) ;
    }
    printf("Factorial of 5 = %d",fact);
    
    return 0;
}