#include<stdio.h>
#include <stdlib.h>// This includes abs function----

int main(){
    int x;
    printf("Enter value of x:::");
    
    scanf("%d",&x);

    switch(x>0){
        case 1: x = -x;
        break;
        case 0: x = -x;
        break;
    }
    printf("x = %d ",x);
    return 0;
}