#include<stdio.h>
 int length(char* p){
    int i;
    for(i=0;*(p+i);i++);
    return i;

    }
 
int main(){
     char str[20];
     gets(str);
     printf("Length = %d",length(str));

    return 0;
}