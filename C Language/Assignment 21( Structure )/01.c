#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char names[20];
    float salary;
};

int main(){
    struct Employee b1;
    
    b1.id= 234;
    strcpy(b1.names,"Bhupendra Makode");
    b1.salary= 4856896.0236;

    printf("Id = %d\nName = %s\nSalary = %.2f\n",b1.id,b1.names,b1.salary);
    
        return 0;
}