#include<stdio.h>
// Function to find duplicate value in Array..
int duplicate(int a[],int size){
    int i;
    for(i=0;i<size;i++){
         if(a[i]==a[i+1])
             return a[i];
    }
}

int main(){
    
    int size;
    printf("Enter no. of item in array::");
    scanf("%d",&size);

    int arr[size];

    for(int i=0;i<size;i++){
    printf("Value of index %d::",i);
    scanf("%d",&arr[i]);}

    printf("\n%d ",duplicate(arr,size));

    return 0;
}