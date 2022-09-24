#include<stdio.h>
#include<string.h>
int count(char* p){
  int i,countV=0,countC=0;
  
  for(i=0;*(p+i);i++){
      if (*(p+i) == 'a' || *(p+i) == 'A' || *(p+i) == 'e' || *(p+i) == 'E' || *(p+i) == 'i' || *(p+i) == 'I' || *(p+i) =='o' || *(p+i)=='O' || *(p+i) == 'u' || *(p+i) == 'U'){
        countV++;
      }
     if(*(p+i)>='a'&&*(p+i)<='z' ||*(p+i)>='A'&&*(p+i)<='Z'){
        countC++;
      } 
      }
     printf("\nNo. of vowels are = %d",countV);

     printf("\nNo. of constants are = %d",countC-countV);

  
  return 0;
}

int main(){
    char str[20];
    printf("Get a String\n");
    gets(str);
    count(str);
    return 0;
}