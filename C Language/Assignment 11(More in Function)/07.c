#include<stdio.h>
void fabonacii(int x){
    int old=0,curent=1, next=0;

    printf("1 ");
    for(int i=1;i<x;i++){
        next = old+curent;
        printf("%d ",next);

        old= curent;
        curent= next;
    }
}

int main(){
     int num;
    printf("Enter value of num::");
    scanf("%d",&num);
    fabonacii(num);
    return 0;
    
}