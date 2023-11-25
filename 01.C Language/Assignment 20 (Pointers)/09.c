#include<stdio.h>
// Getting Input---
void input(int* p, int size){
    for(int i=0;i<size;i++){
        printf("Enter Element %d ::",i);
        scanf("%d",(p+i));
    }
}
// Geting Reverse Array
void reverse(int* p, int size){
    int i,j,temp;
    for(i=0;i<size/2;i++){
        temp =*(p+i);
        *(p+i) =*(p+size-1-i);
        *(p+size-1-i) =temp;
    }
  printf("\nReversed Array-----\n");
  for(i=0;i<size;i++)
    printf("%d ",*(p+i));
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    reverse(arr,n);

return 0;
}