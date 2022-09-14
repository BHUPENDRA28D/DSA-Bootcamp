#include<stdio.h>
#include<string.h>
int palaindrom(char *p){
    
    int l= strlen(p);
    int flag=1;
    
    for(int i=0;i<l/2;i++){
       if(p[i] != p[l-1-i]){
        flag=0;
        break;
       }
        
         if(flag==1) 
          return 1;

         else 
          return 0;  
         
    }

}
int main(){
    char str[20];
    printf("Enter a String\n");
    gets(str);

    if(palaindrom(str)==1){
        printf("Palindrom\n");
        
    }
    else
       printf(" Not Palindrom\n");
    return 0;
}