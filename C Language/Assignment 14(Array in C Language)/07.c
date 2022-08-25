#include<stdio.h>

int main(){
    int arr[5],largest= arr[0],secondLargest=-1;

    for(int i=0;i<5;i++){
        printf("Element %d::",i);
        scanf("%d",&arr[i]);
    }

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