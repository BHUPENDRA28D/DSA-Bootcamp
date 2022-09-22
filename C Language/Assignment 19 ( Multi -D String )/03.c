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
void swap(int *p, int *q){
    int t;
    
    t= *p;
    *p= *q;
    *q= t;
    // *p = *p+q-(*q=*p);
    printf("a = %d\nb = %d\n",*p,*q);
}
int main(){
    int arr[10];
    // input(arr,10);
    // display(arr,10);
    int a=20 ,b=10;
    swap(&a,&b);
    return 0;
}