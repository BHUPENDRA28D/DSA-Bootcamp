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
    printf("  Id = %d\nName = %s\nSemester = %d\nBranch = %s",b->id,b->names,b->sem,b->Branch);
    printf("\n-----------\n");
      
}
int main(){
    int n;
    printf("Enter value of n\n");
    scanf("%d",&n);
    struct Student b[n];
    int i;
    
    for( i=0;i<n;i++){
        b[i]= input();
    }

    for(i=0;i<n;i++){
        display(&b[i]);
    }
        return 0;
}