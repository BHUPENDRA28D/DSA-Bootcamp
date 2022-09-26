#include<stdio.h>
struct time
{
    int hr;
    int min;
    int sec;
};


struct time input(){
    struct time b;

    printf("Hours :: ");
    scanf("%d",&b.hr);
   
    printf("Minutes:: ");
    scanf("%d",&b.min);

    printf("Seconds:: ");
    scanf("%d",&b.sec);
     printf("-------------------\n");
    printf("\n");

    return b;
}

void differ(struct time start,struct time stop){
    struct time diff;
    while(stop.sec>start.sec){
        --start.min;
        start.sec+=60;
    }
    diff.sec = stop.sec - start.sec;

    while(stop.min>start.min){
         --start.hr;
        start.min+=60;
    }
    diff.min = stop.min - start.min;
    diff.hr = stop.hr - start.hr;
    printf("\n");printf("\n");

    printf("\n%d :: %d :: %d",diff.hr,diff.min,diff.sec);

}

int main(){
    struct time s,e,d;
    printf("Enter Start Time\n");
    printf("-------------------\n");
    s = input();
    printf("Enter Start Time\n");
    printf("-------------------\n");
    e = input();

    differ(s,e);
    
    return 0;
}