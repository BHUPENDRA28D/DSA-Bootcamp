#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    printf("Enter a string\n");
    gets(str);

    int temp, l= strlen(str);
    
    // for(int i=0;i<l/2;i++){
    //     temp= str[i];
    //     str[i] = str[l-1-i];
    //     str[l-1-i]=temp;
       
    // }
    // method-2
     int s=0, e=l-1;
     while(s<e){
        temp = str[s];
        str[s] = str[e];
        str[e] = temp;
        s++;
        e--;
     }
    printf("%s",str);
    return 0;
}