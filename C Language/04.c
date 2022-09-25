#include<stdio.h>
#include<string.h>
struct Employee{
    
    char names[20];
    float salary;
};
struct Employee input(){
    struct Employee b;
    // printf("Employee Id :: ");
    // scanf("%d",&b.id);
    fflush(stdin);
    printf("Employee Name :: ");
    gets(b.names);
    printf("Employee Salary :: ");
    scanf("%f",&b.salary);
    printf("\n");
    return b;
}
void display(struct Employee* b){
      printf("Highest Salary is of %s which is %.2f",b->names,b->salary);
}
int main(){
    struct Employee b[5];
    int i;
    
    for( i=0;i<5;i++){
        b[i]= input();
    }

    float max = b[0].salary;
    int count =0;
    
    for ( i = 1; i < 5 ; i++)
    {
        if(b[i].salary > max){
            max = b[i].salary;
            count = i;
        }
    }
    
    printf("\n");
    display(&b[count]);
    
        return 0;
}