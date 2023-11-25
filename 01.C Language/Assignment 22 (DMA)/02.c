#include<stdio.h>
#include <stdlib.h>
 
void input(int* p,int size ){
    for(int i=0;i<size;i++){
        printf("Value of elemetn %d::",i);
        scanf("%d",(p+i));
    }
}
float avg(int *p,float size){
    float sum=0;
    for(int i=0;i<size;i++){
        sum= sum+*(p+i);
    }
    float avg = sum/size;
    return avg;
}

int main(){
    int x;
    printf("Enter value of x:");
    scanf("%d",&x);

    int *ptr;
    ptr =(int*) malloc(x *sizeof(int));

// In case memory is not allocated 
    if(ptr==NULL){
        printf("Memory Allocation Failed\n");
        return 0;
    }
    
    input(ptr,x);
    printf("\n Avrage = %.2f",avg(ptr,x));
    free(ptr);
    return 0;
}