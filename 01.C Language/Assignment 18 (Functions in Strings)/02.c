#include<stdio.h>
#include<string.h>
void reverse(char *p){
    int i=0, temp, l = strlen(p);
    for(i=0;i<l/2;i++){
        temp = p[i];
        p[i] = p[l-1-i];
        p[l-1-i] = temp;
    }

    printf("%s",p);
}

int main(){
    char str[20];
    printf("Enter a String\n");
    gets(str);
    reverse(str);
    return 0;
}