#include<stdio.h>

int main(){
    int  arr[10],sum=0;// here n=10
    

    for(int i=0;i<10;i++){
        printf("Enter value of element %d::",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i<10; i++)
    {
        sum = sum+arr[i];
    }
    
    printf("The sum of numbers is %d",sum);
    
    return 0;
}