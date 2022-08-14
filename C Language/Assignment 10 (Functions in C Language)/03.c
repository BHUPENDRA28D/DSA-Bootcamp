#include<stdio.h>
int evenOdd(int);
int main(){
     int num;
     printf("Enter random number:-");
     scanf("%d",&num);

        if(evenOdd(num)==1)
            printf("Even\n");

            else
            printf("Odd\n");
    return 0;
}
int evenOdd(int num){
    if (num%2==0)
    {
        return 1;
    }
    else
        return 0;
    
}