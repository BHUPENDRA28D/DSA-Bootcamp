#include<stdio.h>

int main(){
    int arr[3][3]={{1,3,8},{2,4,7},{5,6,9}};
    int brr[3][3]={{1,3,8},{2,4,7},{5,6,9}};
    int crr[3][3];

    

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           crr[i][j]= arr[i][j] + brr[i][j];
           printf(" %d    ", crr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}