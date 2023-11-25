#include<stdio.h>

int main(){
    int x;
    printf("Choose a number btween 1-5\n");
    scanf("%d",&x);

    switch (x)
    {
    case 1: printf("Good\n");
        break;
    case 2: printf("better\n");
        break;

    case 3: printf("best\n");
        break;    
    default:
        printf("Invalid Choice\n");
        break;
    }
    return 0;
}