#include<stdio.h>

int main(){
    int arr[10],sum=0;
    float avg;
    
    for(int i=0;i<10;i++){
        printf("Enter the total marks of student %d::",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 10; i<5; i++)
    {
        sum = sum+arr[i];
    }
    avg=sum/5;
    printf("The average of class is %.2f",avg);
    
    return 0;
}