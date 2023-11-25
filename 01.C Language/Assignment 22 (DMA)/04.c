#include<stdio.h>
#include<stdlib.h>

int main(){
    char *p;
    p=(char*)malloc(10*sizeof(char));
    printf("Enter the string :: ");
    gets(p);
    printf("\n%s",p);
    
    return 0;
}