#include<stdio.h>

int main(){
    int arr[5],small,secondsmall=100;

    for(int i=0;i<5;i++){
        printf("Element %d::",i);
        scanf("%d",&arr[i]);
    }

    small =0; //small only declared after taking input
    for(int i=0;i<5;i++){
        if(arr[i] <small){
            secondsmall= small;
            small= arr[i];}
            
          else  if(small<arr[i]  &&  secondsmall >arr[i]){
                secondsmall = arr[i];}
        }   
    
    printf("Second smallest = %d",secondsmall);
    return 0;
}