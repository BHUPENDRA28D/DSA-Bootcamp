#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c , n;

    
    while(1){

        printf("Enter sides of triangle a b and c\n");
        scanf("%d%d%d",&a,&b,&c);

       
        printf("----- Choice number to check Type of triangle\n");
        printf("1. Isoscles Triangle\n");
        printf("2. Right Angle Triangle\n");
        printf("3. Equilateral Triangle\n");
        printf("4.  Exit\n");

        printf("----- Choice number to check Type of triangle\n");
        scanf("%d",&n);

    //  Appling switch Case statement

    switch (n)
    {
        
    case 1:
        if (a==b || b==c || c==a)
        {
            printf("Yes Isoscles Triangle\n");
        }
        else
            printf("Not a Isoscles Triangle\n");

        break;
    
    case 2:
        if ((a*a)==(b*b)+(c*c) || (b*b)==(a*a)+(c*c)||(c*c) ==(a*a)+(b*b)){
            printf("Yes RightAngled Triangle\n");
        }
        else
            printf("Not a RightAngled Triangle\n");

        break;

        case 3:
        if (a==b && b==c)
        {
            printf("Yes Equilateral Triangle\n");
        }
        else
            printf("Not a Equilateral Triangle\n");

        break;

    default:
        printf("---------  INVALID CHOICE-----------\n");
        break;

    if(n==4){
        break;
    }
    }
printf("\n----------------------------------------\n");
    }
    clrscr();
    return 0;
}