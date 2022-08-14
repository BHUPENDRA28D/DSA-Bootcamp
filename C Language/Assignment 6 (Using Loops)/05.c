#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter value of n:-");
    scanf("%d",&n);

    for (int i=1; i<=n; i++)
    {
        sum+= (i*i*i);
    }
    printf("Sum of cube of n number is %d",sum);
    
    return 0;
}