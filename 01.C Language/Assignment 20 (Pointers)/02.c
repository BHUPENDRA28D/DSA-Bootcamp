#include<stdio.h>
void swap_String(char *p,char *q){
        char temp[20];
        for(int i=0;i<*(p+i);i++){
            temp[i]= *(p+i);
            *(p+i)= *(q+i);
            *(q+i) = temp[i];

        }
        //  for(int i=0;i<*(p+i);i++){
         printf("Stirng 1 ----- %s",p);
         printf("\nStirng 2 ----- %s",q);
// }
}
int main(){
     char str[20] ,atr[20];
     printf("Enter String 1::");
     gets(str);
     printf("\nEnter String 2::");
     gets(atr);
        swap_String(str, atr);
    return 0;
}
// can be done by two level pointer.