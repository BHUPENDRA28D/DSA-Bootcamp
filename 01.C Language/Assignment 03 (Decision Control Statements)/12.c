#include<stdio.h>

int main(){
    char x;
    printf("enter the value of x::");
    scanf("%c",&x);

    if(x>=65 && x<=90)
        printf("%c is Uppercase Alphabet",x);
    else if(x>=97 && x<=122)
        printf("%c is Lowercase Alphabet",x);
     

    return 0;
}