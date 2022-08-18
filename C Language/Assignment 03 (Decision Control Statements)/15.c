#include<stdio.h>

int main(){
    int a;
    printf("Enter value of a ::");
    scanf("%d",&a);

    if(a>0)
        printf("%d is positive\n",a);
    else if (a==0)  
    
        printf("%d is zero",a);
    else
        printf("%d is negative",a);
    
    return 0;
}