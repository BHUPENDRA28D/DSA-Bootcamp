#include<stdio.h>
#include<string.h>
struct Marks{
    int id;
    char names[20];
    float chem_marks;
    float phy_marks;
    float math_marks;
};
struct Marks input(){
    struct Marks b;
    printf("Student Id :: ");
    scanf("%d",&b.id);

    fflush(stdin);
    printf("Student Name :: ");
    gets(b.names);
    printf("Enter marks out of 100\n");

    printf("Student Chemistry Marks:: ");
    scanf("%f",&b.chem_marks);

     printf("Student Physics Marks:: ");
    scanf("%f",&b.phy_marks);

     printf("Student Maths Marks:: ");
    scanf("%f",&b.math_marks);
    printf("----------\n");

    return b;
}
void percent(struct Marks* b,int size){
    float percentage;
    for(int i=0;i<size;i++){

     percentage = (b->chem_marks+b->phy_marks+b->math_marks)/3;  
    }

    printf("-----------\n");
    printf(" Id = %d\nName = %s\nPercentage  = %.2f",b->id,b->names,percentage);
    printf("\n-----------\n");
      
}
int main(){
    int n;
    printf("Enter value of n\n");
    scanf("%d",&n);
    struct Marks b[n];
    int i;

      printf("-----------\n");
    
    for( i=0;i<n;i++){
        b[i]= input();
    }

    for(i=0;i<n;i++){
       percent(&b[i],n);
    }
        return 0;
}