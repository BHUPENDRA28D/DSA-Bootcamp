#include<stdio.h>
int duplicate(int a[],int size){
    int i,j, count=0;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(a[i]==a[j])
                count++;
        }
    }
    return count;
}

int main(){
    int size;
    printf("Enter no. of item in array::");
    scanf("%d",&size);

    int arr[size];

    for(int i=0;i<size;i++){
    printf("Value of index %d::",i);
    scanf("%d",&arr[i]);}

    printf("No. of element duplicating in Array are: %d",duplicate(arr,size));
    return 0;
}