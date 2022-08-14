#include<stdio.h>

int main(){
    int n ,remainder, reverse=0;
    printf("Enter a number:-");
    scanf("%d",&n);

    while (n!=0)
    {
       remainder = n%10;
       n=n/10;
       reverse=reverse*10+remainder;
    
    }
    printf("The reverse number is %d",reverse);
    return 0;
}