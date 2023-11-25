#include<stdio.h>

int main(){
    int n,sum=0;
    
    printf("Enter value of n:-");
    scanf("Sum of n numbers is %d",&n);

    for (int i=0; i<=n; i++)
    {
        sum+= i;
    }
    printf("%d",sum);


    return 0;
}