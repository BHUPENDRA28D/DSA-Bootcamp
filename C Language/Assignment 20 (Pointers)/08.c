#include<stdio.h>
void input(int* p, int size){
    for(int i=0;i<size;i++){
        printf("Enter Element %d ::",i);
        scanf("%d",(p+i));
    }
}
int sum(int* p,int size){
    int sum=0;
    for(int i =0;i<size;i++){
        sum+=*(p+i);
    }
    return sum;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    printf("Sum = %d",sum(arr, n));
    return 0;
}