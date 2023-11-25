#include<stdio.h>
int LCM(int x,int y){
    for(int i=1;i<=x*y;i++){
        if(i%x==0 && i%y==0){
            return i;
        }
    }
    return 0;
}

int main(){
    int a,b;
    printf("Enter value of a and b::");
    scanf("%d%d",&a,&b);
    printf("LCM = %d",LCM(a,b));
    
    return 0;
}