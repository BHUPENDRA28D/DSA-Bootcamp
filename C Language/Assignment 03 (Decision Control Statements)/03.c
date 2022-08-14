#include<stdio.h>

int main(){
    int x;
    printf("enter the value of x::");
    scanf("%d",&x);

    if(x/2*2==x)
        printf("Even");
    else
        printf("Odd");    

    return 0;
}


