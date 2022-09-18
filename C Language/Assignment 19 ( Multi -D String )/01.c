#include<stdio.h>

int main(){
    char str[5][20];
    int count =0,i=0,j;

    while(i<5){
    printf("Enter Strings %d\n",i);
    fgets(str[i],20,stdin);
    i++;
    }

    for(int i=0;i<5;i++){
        count=0;
        for(int j=0;str[i][j];j++){
            
            if(str[i][j] == 'a' || str[i][j] == 'e' ||str[i][j] == 'i'||str[i][j] == 'o'||str[i][j] == 'u')
            count++;
        }
        printf("%s = %d\n",str[i],count);
    }
   
    return 0;
}