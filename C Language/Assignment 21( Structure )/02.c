#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char names[20];
    float salary;
};
struct Employee input(){
    struct Employee b;
    printf("Employee Id :: ");
    scanf("%d",&b.id);
    fflush(stdin);
    printf("Employee Name :: ");
    fgets(b.names,20,stdin);
    printf("Employee Salary :: ");
    scanf("%f",&b.salary);

    return b;
}
int main(){
    struct Employee b1;
    
    b1 =input();

    printf("\nId = %d\nName = %s\nSalary = %.2f",b1.id,b1.names,b1.salary);
    
        return 0;
}