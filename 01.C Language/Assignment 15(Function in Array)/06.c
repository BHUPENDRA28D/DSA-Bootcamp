#include<stdio.h>
// Function to reverse an array..
void reverse(int a[],int size){
    int i;
    for(i=size-1;i>=0;i--){
        printf("%d ",a[i]);
    }
}
// Main program to reverse an array..with index number..s
    // void reverse (int b[],int size){
    //     int s=0, e=size-1,temp;
    //     while(s<e)
    //     {
    //         temp= b[s];
    //         b[s]= b[e];
    //         b[e]= temp;
    //         s++;
    //         e--;
    //     }
    //     for(int i=0;i<size;i++){
    //         cout<<" "<<b[i];
    //     }
    
int main(){
    int size;
    printf("Enter no. of item in array::");
    fflush(stdin);
    scanf("%d",&size);

    int arr[size];

    for(int i=0;i<size;i++){
    printf("Value of index %d::",i);
    scanf("%d",&arr[i]);}

    reverse(arr,size);
    return 0;
}