#include<stdio.h>
#include<stdlib.h>
int main(){
int *p = (int*)malloc(sizeof(int ));
    *p = 10;

    printf("\n Variable Before Free %d\n",*p);

    free(p);
    printf("\n Variable After Free %d\n",*p);
    return 0;}