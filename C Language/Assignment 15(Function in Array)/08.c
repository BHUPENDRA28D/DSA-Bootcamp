#include<stdio.h>
void unique(int a[],int size){
    int i,j,count; 
    for(i=0;i<size;i++){
        count=0;
        // for statement will start form 0 as it will also check numbers before a following numbers..
        for(j=0;j<size;j++){
            if(i != j)
            if(a[i]==a[j])
                count ++;
        }
         if (count ==0)
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

    unique(arr,size);
    return 0;
}