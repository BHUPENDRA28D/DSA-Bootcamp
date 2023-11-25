#include<stdio.h>

int main(){
    char str[20];
    printf("Enter a string\n");
    gets(str);

    int a=0,n=0,s=0;
    for(int i=0;str[i];i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            a++;
        }
        else if((str[i]>='0' && str[i]<='9'))
         n++;

        else
          s++;
     
    }
    printf("in string %s \n",str);
    printf("Alphabets = %d\nNumbers = %d\nSpecial Char = %d \n",a,n,s);

    return 0;
}