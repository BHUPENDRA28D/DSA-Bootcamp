#include<stdio.h>

int main(){
    int arr[5];

    for(int i=0;i<5;i++){
        printf("Element %d::",i);
        scanf("%d",&arr[i]);
    }
    int largest= arr[0],secondLargest=-1;  // largest = arr[0] only givin after taking input of arr

    for(int i=0;i<5;i++){
        if(arr[i] >largest){
            secondLargest= largest;
            largest= arr[i];}
          else  if(largest > arr[i]  &&  secondLargest < arr[i]){
            
                secondLargest = arr[i];}
            
        
        }

        
    
    printf("Second Largest %d",secondLargest);
    return 0;
}