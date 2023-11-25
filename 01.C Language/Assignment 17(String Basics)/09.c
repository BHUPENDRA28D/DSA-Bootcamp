#include<stdio.h>

int main(){
    char str[20];
    printf("Enter a string\n");
    gets(str);
    int temp;
    int count =0;
    for(int i=0;str[i];i++){
        for(int j=i+1;str[j];j++){
        if(str[i]>str[j]){
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            
        }}
    }
    printf("%s",str);
    return 0;
}