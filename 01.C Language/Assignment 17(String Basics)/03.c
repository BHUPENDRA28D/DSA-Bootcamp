#include<stdio.h>

int main(){
    char str[20];
    printf("Enter a string\n");
    gets(str);

    int count =0;
    for(int i=0;str[i];i++){
        if((str[i]== 'a'&& 'A') || (str[i]== 'e'&& 'E') || (str[i]== 'i'&& 'I') || str[i]== 'o'&& 'O' || str[i]== 'u'&& 'U')
          count++;
    }
    printf("NO.of vowel = %d",count);
    return 0;
}