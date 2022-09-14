#include<stdio.h>
void upperCase(char *p){
    for(int i=0;p[i];i++){
        if(p[i]>=97 && p[i]<= 123)
          p[i]-= 32;
    }
    printf("%s",p);
}
int main(){
    char str[20];
    printf("Enter a String\n");
    gets(str);
    upperCase(str);
    return 0;
}