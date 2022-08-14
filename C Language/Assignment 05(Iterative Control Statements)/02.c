#include<stdio.h>

int main(){
    int i=1,n;
    printf("Enter the number:: ");
    scanf("%d\n",&n);

    while(i<=n){
        
        printf("%d",i);
        i++;
    }
    return 0;
}