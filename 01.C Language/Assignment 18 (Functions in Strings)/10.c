#include<stdio.h>
#include<string.h>
void repeated(char *p){
    int l = strlen(p);
    for(int i=0;i<l;i++){
        for(int j=i+1;i<l;j++){
         if(p[i] ==p[j]){
          printf("%c\n",p[i]);
          break;} 
    }}
   
}
int main(){
    char str[20];
    printf("Enter a String\n");
    gets(str);
    repeated(str);
    return 0;
}