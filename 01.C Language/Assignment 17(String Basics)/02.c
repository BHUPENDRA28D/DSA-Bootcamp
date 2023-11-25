#include<stdio.h>
#include<string.h>
int main(){

     char  str[20];
     char ch;
     printf("Enter a letter\n");
    
     scanf("%c",&ch);
      fflush(stdin);
     printf("Enter a stirng\n");
     gets(str);

    int count=0;
     for(int i=0;str[i];i++){
        if(ch == str[i])
         count++;
        
     }
     printf("%c occurance = %d",ch,count);

    return 0;
}