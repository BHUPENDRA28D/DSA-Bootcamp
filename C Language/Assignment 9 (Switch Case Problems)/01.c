#include<stdio.h>

int main(){
    int x;
    printf("\nEnter the Number of Month:-");
    scanf("%d",&x);

    switch (x)
    {// Case for 31 days
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\n---31 days---");
        break;

        // Case for 30 days
    case 4:
    case 6:
    case 9:
    case 11:
        printf("\n---31 days---");
        break;

    case 2:
        printf("\n---28 or 29 days---");
        break;

    default:
    printf("\n---Invalid Month Number---");
        break;
    }
    printf("\n \n");
    return 0;
}