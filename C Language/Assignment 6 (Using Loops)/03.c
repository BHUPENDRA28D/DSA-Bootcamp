#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter value of n:-");
    scanf("%d",&n);

    for (int i = 01; i<=n; i++)
    {      
     sum+= 2*i-1;
    }
    printf("Sum of odd numbers is %d",sum);
    return 0;
}