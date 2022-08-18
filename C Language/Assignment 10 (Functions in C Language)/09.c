#include<stdio.h>
int findDigit( int ,int);
int main(){
    int num, dig=3;
    printf("Enter value of num:");
    scanf("%d",&num);

    if (findDigit(num,dig)== 1)
    {
        printf("Digit Found");
    }
    else
        printf("digit not found");
return 0;
}
int findDigit(int num, int digit){
    int r;
    while(num !=0)
    {
        r = num%10;
        if (r ==digit)
        {return 1;}

        num = num/10;
    }
    return 0;
}