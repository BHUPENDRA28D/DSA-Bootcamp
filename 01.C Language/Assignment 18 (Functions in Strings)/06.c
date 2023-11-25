#include<stdio.h>
int alphaNumeric(char *p){

    for(int i=0;p[i];i++){
        if((p[i]>=97||65 && p[i]<= 91||123) && (p[i]>= '0' && p[i]<='9'))
          return 1;
    }
    return 0;
}
int main(){
    char str[20];
    printf("Enter a String\n");
    gets(str);
    (alphaNumeric(str)==1)?printf("%s is alphanumeric\n",str) : printf("%s is not alphanumeric\n",str);
    return 0;
}