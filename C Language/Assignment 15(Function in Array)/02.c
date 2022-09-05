#include<stdio.h>
// Function decleration for smallest value of array.
int small(int a[],int size){
    int min= a[0];
    for(int i=0;i<size;i++){
        if(a[i]<min)
          min= a[i];
    }
return min;}

int main(){
    int size;
    printf("No. of Items in Array ::");
    scanf("%d",&size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Value at index %d ::",i);
        scanf("%d",&arr[i]);
    }
    printf("\n-----Smallest number of array is %d-----",small(arr,size));
    return 0;
}