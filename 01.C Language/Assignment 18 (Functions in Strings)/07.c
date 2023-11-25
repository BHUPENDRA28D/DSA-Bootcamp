#include<stdio.h>
#include<string.h>
int palaindrom(char *p){
    
    int l= strlen(p),i,j;
    int flag=1;
/* methode -1 
    for( i=0;i<l;){
       for(j=l-1-i;j<=0;){
        if(p[i]==p[j]){
            i++;
            j++;
        }
    }
} */
    // methode -2
    for(i=0;i<l/2;i++){
       if(p[i] != p[l-1-i]){
        flag=0;
        break;
       }}
        
        if(flag==1) 
          return 1;

         else 
          return 0;  
         
    }


int main(){
    char str[20];
    printf("Enter a String\n");
    gets(str);

    if(palaindrom(str)==1){
        printf("Palindrom\n");}
        
    
    else
       printf(" Not Palindrom\n");
    return 0;
}
