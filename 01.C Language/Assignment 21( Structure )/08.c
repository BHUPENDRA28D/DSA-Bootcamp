#include<stdio.h>
#include<string.h>
struct Student{
    int id;
    char names[20];
    int  sem;
    char Branch[20];
};
struct Student input(){
    struct Student b;
    printf("Student Id :: ");
    scanf("%d",&b.id);

    fflush(stdin);
    printf("Student Name :: ");
    gets(b.names);

    printf("Student Semester:: ");
    scanf("%d",&b.sem);

     fflush(stdin);
    printf("Students Branch :: ");
    gets(b.Branch);
    printf("\n");

    return b;
}
void display(struct Student* b){
    printf("-----------\n");
    printf("  Id = %d\nName = %s\nSemester = %d\nBranch = %",b->id,b->names,b->sem,b->Branch);
    printf("\n-----------\n");
      
}
int main(){
    struct Student b[5];
    int i;
    
    for( i=0;i<5;i++){
        b[i]= input();
    }

    for(i=0;i<5;i++){
        display(&b[i]);
    }
        return 0;
}