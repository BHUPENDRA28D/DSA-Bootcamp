#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *str= (char*)malloc(sizeof(char)),c;
     int i=0,j=1;

    printf("Enter a String:: ");
     while(c!='\n'){
        c= getc(stdin);
        j++;
        str= (char*)realloc(str,j*sizeof(char));

        str[i]= c;
        i++;

     }
     str[i]='\0';

     printf("%s",str);
}