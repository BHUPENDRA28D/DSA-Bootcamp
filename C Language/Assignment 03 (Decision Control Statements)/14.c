#include<stdio.h>

int main(){
    int x;
    printf("enter the value of x::");
    scanf("%d",&x);

    if(x%7==0 || x%3==0)
        printf("%d is divisible by  2 or 3",x);
     else           
        printf("%d is not divisible by  2 or 3 ",x);        

    return 0;
}