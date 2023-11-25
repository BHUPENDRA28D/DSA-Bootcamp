#include<stdio.h>

int main(){
       int x;
    int a=20,b=5;
    
    
    while(1){  
      printf("\n\nPress Respective Number\n\n1.Addition\n2.Subtract\n3.Multiply\n4.Division\n5.Exit\n");
      scanf("%d",&x);
      printf("-------------------------------------\n\n");
        switch(x){
          
            case 1:
              printf("\n Sum = %d",a+b);
              break;
              
            case 2:
              printf("\n Diff = %d",a-b);
              break;
              
            case 3:
              printf("\n Multiply = %d",a*b);
              break;
              
            case 4:
              printf("\n Division = %d",a/b);
              break;
              
            case 5:
                printf("\nExited");
                break;
              
            default:     
              printf("\n_________Invalid Choice_________\n-----------Error------");
        }
        
        if(x=5)
          break;
        
    }printf("\n\n-------------------------------------");//end of while loop
    
    return 0;
}