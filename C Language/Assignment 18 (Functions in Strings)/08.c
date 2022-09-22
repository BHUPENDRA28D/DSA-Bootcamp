#include<stdio.h>
int words(char *p){
    int i,count=1;
    for(i=0;p[i];i++){
        if(p[i]== ' ' && p[i+1] != ' '){
         count++;}
    }
    return count;

}

int main(){
    char str[20];
    printf("Enter a String\n");
    gets(str);

    printf("words = %d",words(str));
    return 0;
}