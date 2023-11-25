#include<stdio.h>
void lowerCase(char *p){
    for(int i=0;p[i];i++){
        if(p[i]>=65 && p[i]<= 91)
          p[i]+= 32;
    }
    printf("%s",p);
}
int main(){
    char str[20];
    printf("Enter a String\n");
    gets(str);
    lowerCase(str);
    return 0;
}