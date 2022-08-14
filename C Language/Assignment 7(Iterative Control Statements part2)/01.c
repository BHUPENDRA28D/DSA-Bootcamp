#include<stdio.h>

int main(){
    int n, old=0, current= 1 , next=0;
    printf("Enter the vlaue of n:-");
    scanf("%d",&n);
    printf("1");
    
    for (int i = 0; i<n-1; i++){

//       if(old ==1){
//             } 

        next= old +current;
        
        old = current;
        current =next;
    }
    printf("\nNth term of Fibonnaci is %d",next);
    
    return 0;
}