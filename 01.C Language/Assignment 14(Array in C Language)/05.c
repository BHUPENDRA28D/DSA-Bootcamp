#include<stdio.h>

int main(){
    int arr[10], min= arr;
    
    for(int i=0;i<10;i++){
        printf("Element %d::",i);
        scanf("%d",&arr[i]);
      if(min > arr[i])
         min = arr[i];
    }
    printf("Smallest number of Array-->%d",min)
    return 0;
}