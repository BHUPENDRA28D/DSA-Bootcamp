#include<stdio.h>
#include<string.h>
int comp(char *p, char *q){
    int i;
    int l1=strlen(p);
    int l2=strlen(q);
    if(l1!=l2){
        return 1;
    }
    for(i=0;i<l1;i++){
        if(p[i]==q[i])
         return 0;
    }
    return 1;

}

int main(){
    char str[20],atr[20];
    printf("Enter Two String\n");
    printf("String 1:: ");
    gets(str);
    printf("String 2:: ");
    gets(atr);
    
    (comp(str,atr)==1)?printf("Strings not Equal"):printf("Strings are Equal");
    
    
    return 0;
}