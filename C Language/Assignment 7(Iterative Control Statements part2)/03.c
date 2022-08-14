#include<stdio.h>

int main(){
    int n, old=0, current= 1 , next=0;
    printf("Enter the vlaue of n:-");
    scanf("%d",&n);
    printf("1");


    for (int i = 0; 1 ; i++){

        next= old +current;
        printf(" %d ", next); 
        old = current;
        current =next;

        if (next==n)
        {
            printf("\n%d is in Fibonnaci Series",n);
            break;
        }
        if (next>n)
        {
             printf("\n%d is not in Fibonnaci Series",n);
             break;
        }
          
    }

    
    
    return 0;
}