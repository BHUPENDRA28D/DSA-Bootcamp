#include<stdio.h>

int main(){
    int a,b,c;
    
    printf("Enter triangle's side a::");
    scanf("%d",&a);
    printf("Enter triangle's side b::");
    scanf("%d",&b);
    printf("Enter triangle's side c::");
    scanf("%d",&c);

    if(a+b > c  && b+c >a && a+c > b){
        printf("Valid Triangle");}

    else    
    printf("Invalid Triangle");
    return 0;
}