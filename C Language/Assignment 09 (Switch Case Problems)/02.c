#include<stdio.h>

int main(){
    int x, a=20,b=10;
    
    
    while (1)
    {
    printf("\n1. Addition");
    printf("\n2. Subtractio");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Exit");

    
        printf("\nEnter Your Choice:--");
        scanf("%d",x);

        switch (x)
        {
        case 1:
            printf("\nEnter 2 numbers");
            scanf("%d%d",&a<&b);
            printf("\nSum of a+b = %d",a+b);
            break;
        
        case 2:
            printf("\nEnter 2 numbers");
            scanf("%d%d",&a<&b);
            printf("\nSubraction of a-b = %d",a-b);
            break;

        case 3:
            printf("\nEnter 2 numbers");
            scanf("%d%d",&a<&b);
            printf("\nMultiplication of axb = %d",a*b);
            break;

        case 4:
            printf("\nEnter 2 numbers");
            scanf("%d%d",&a<&b);
            printf("\nQuicent of a / b = %d",a/b);
            break;

        case 5:
            printf("\nExit");
            break;

               
        default:
            printf("\nInvalid Choice");
            
          }
            
            if (x=5);
            {
                break;
            }     
        
    }//end of while loop
    
    return 0;
}