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
       printf("Name = %s  Salary = %.2f\n",b->names,b->salary);
}

int main(){
    struct Employee b[10],temp;
    int i,j;
    
    for( i=0;i<5;i++){
        b[i]= input();
    }
    
    for ( i = 0; i < 5; i++)
    { for(j=i+1;j<5;j++)
        if(b[i].salary >b[j].salary){
           temp = b[i];
           b[i] =  b[j];
           b[j]= temp;
        }
    }

    printf("----------Sorted Array------------\n");
    for(i=0;i<5;i++){
       input(b);
    }
    
    
        return 0;
}
