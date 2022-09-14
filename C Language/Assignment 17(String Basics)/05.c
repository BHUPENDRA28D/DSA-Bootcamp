#include<stdio.h>

int main(){
    char str[20];
    printf("Enter a string\n");
    gets(str);

    int count =0;
    for(int i=0;str[i];i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+= 32;
        }
    }
    printf("%s",str);
    return 0;
}