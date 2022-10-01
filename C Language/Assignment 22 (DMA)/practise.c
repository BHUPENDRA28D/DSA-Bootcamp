#include<stdio.h>

int main(){
    
// use of malloc  to store variable in run time.
    int *p;
    p = (float*)malloc(sizeof (int));

    scanf("%d",p);
    printf("Value of Dynamic variable is %d",*p);

// use of calloc to store an array
    int *q;
    q = (int*)calloc(5,sizeof(int));

  for(int i=0;i<5;i++) {
        printf("\nEnter Element %d",i);
        scanf("%d",(p+i));
        
    } for(int i=0;i<5;i++)
       printf("%d ",p[i]);
    return 0;
}