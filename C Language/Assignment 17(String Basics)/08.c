#include<stdio.h>
#include<string.h>

int main(){
    char str[20],atr[20];
    printf("Enter a string\n");
    gets(str);
    int i;
    for( i=0;str[i];i++){
        atr[i]=str[i];
    }
    atr[i]='\0';
     
    printf("%s",atr);
    return 0;
}