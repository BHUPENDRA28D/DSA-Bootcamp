#include<stdio.h>
#include<string.h>
// Getting Input---

// Geting Reverse Array
void reverse(char* p){
    int temp,s=0,e=(strlen(p)-1);
    while (s<e)
    {
        temp= p[s];
        p[s]= p[e];
        p[e]=temp ;
        s++;
        e--;
    }
    
  printf("\nReversed String-----\n");
    printf("%s",p);
}
int main(){
  
    char arr[20];
    printf("Get a String\n");
    gets(arr);
    reverse(arr);

return 0;
}