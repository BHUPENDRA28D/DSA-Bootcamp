#include<stdio.h>
int largest(int a[],int size){
    int max= a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i]> max)
          max=a[i];
    }
    return max;  
}

int main(){
    
    int size;
    printf("Enter Number of items in Array ::");
    scanf("%d",&size);

    int arr[size];
    for(int i=0;i<size;i++){
        printf("Value at Index %d::",i);
        scanf("%d",&arr[i]);
    }
    printf("\nGreatest Number of array is %d",largest(arr,size));

    return 0;
}