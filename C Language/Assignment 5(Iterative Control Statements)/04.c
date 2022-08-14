#include<stdio.h>

int main(){
    int n;
    printf("Enter a number ::");
    scanf("%d",&n);

    for (int i = 1; i<=n;i++)
    {
        printf("%d\n",2*i-1);

        
        /* Step--2 to solve question
        
        if(2%i != 0){
            printf("%d\n",i);
        }
        */
    }
    

    return 0;
}