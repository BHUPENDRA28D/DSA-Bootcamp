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
    diff.sec = start.sec - stop.sec;

    while(stop.min>start.min){
         --start.hr;
        start.min+=60;
    }
    diff.min = start.min - stop.min;
    diff.hr = start.hr - stop.hr;
    printf("\n");

    if(diff.hr < 0){
        diff.hr = diff.hr*-1;
    }
        

    printf("\n%d :: %d :: %d",diff.hr,diff.min,diff.sec);

}

int main(){
    struct time s,e,d;
    printf("Enter Start Time\n");
    printf("-------------------\n");
    s = input();
    printf("Enter End Time\n");
    printf("-------------------\n");
    e = input();

    differ(s,e);
    
    return 0;
}