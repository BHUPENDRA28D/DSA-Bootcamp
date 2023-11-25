#include<stdio.h>
// Function of sorting an array.
void sort(int a[],int size){
    int i,j,temp=0;
   
    for(i=0;i<size;i++){
      for(j=i+1;j<size;j++){

         if(a[i]>a[j]){
            temp= a[i];
            a[i]= a[j];
            a[j]=temp;
        }
    }}
    
    printf("\n------Sorted Array-------");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
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


    sort(arr,size);

    return 0;
}