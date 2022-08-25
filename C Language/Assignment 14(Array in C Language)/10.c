#include<stdio.h>

int main(){
    int arr[10], b[10],i;
    for(i=0;i<10;i++){
        printf("element %d::",i);
        scanf("%d",&arr[i]);

        {
            b[i]= arr[i];
        }
    }
    
    for(i=0;i<10;i++){
      printf("Element of b[]array are %d",b[i]);}
    return 0;
}