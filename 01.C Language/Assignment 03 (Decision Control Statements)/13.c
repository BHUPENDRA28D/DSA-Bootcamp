#include<stdio.h>

int main(){
    int x;
    printf("enter the value of x::");
    scanf("%d",&x);

    if(x%2==0 &&x%3==0)
        printf("%d is divisible by both 2 and 3",x);
     else           
        printf("%d is not divisible by both 2 and 3 both",x);        

    return 0;
}