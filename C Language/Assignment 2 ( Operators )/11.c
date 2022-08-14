#include<stdio.h>

int main(){
    int a,num;
    printf("Enter a and num::");
    scanf("%d%d",&a,&num);

    a= a*10;
    a= a+num;
    printf("%d ",a);
    return 0;
}