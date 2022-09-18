#include<stdio.h>
void input(int *p,int size){
    
    for(int i=0;i<size;i++){
    printf("Enter element at %d::",i);
    scanf("%d",p+i);}
}
void display (int *p, int size){
    for(int i=0;i<size;i++){
        printf("%d ",*(p+i));
    }
}
int main(){
    int arr[10];
    input(arr,10);
    display(arr,10);
    return 0;
}