#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter value of n::");
    scanf("%d",&n);
    int *p = (int*)malloc(n*sizeof(int)),sum=0;
    
    for(int i=0;i<n;i++){
        printf("Enter Element %d::",i);
        scanf("%d",p+i);
        sum = sum+p[i];
    }
    printf("\nSum = %d",sum);
    return 0;
}