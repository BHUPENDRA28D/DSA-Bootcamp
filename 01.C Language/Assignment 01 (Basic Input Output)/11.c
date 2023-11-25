#include<stdio.h>

int main(){

     int HH,MM;
    printf("Enter hours and minuets\n");
    scanf("%d%*c%d%*c",&HH,&MM);
    
    printf("%d Hour and %d Minute",HH,MM);

    
    return 0;
}