#include<stdio.h>

int main(){
    int  n,arr[n];// here n=10
    printf("value of n::");
    scanf("%d",&n);
    
    int max =arr[0];
    for (int i = 0; i<n; i++)
    {   
        printf("Element %d::", i);
        scanf("%d", &arr[i]);

        if(max < arr[i])
          max = arr[i];
    }
    
    printf("Greatest number in Array --> %d",max);
 
    return 0;
}