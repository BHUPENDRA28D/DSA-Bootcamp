#include<stdio.h>

int main(){
    int arr[10],sum=0;
    
    
    for(int i=0;i<10;i++){
        printf("Enter the total marks of student %d::",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 1; i<10; i++)
    {
        sum = sum+arr[i];
    }
    
    printf("The sum of numbers is %d",sum);
    
    return 0;
}