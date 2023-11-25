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
    gets(b.names);
    printf("Employee Salary :: ");
    scanf("%f",&b.salary);
    printf("\n");
    return b;
}
void display(struct Employee* b){
       printf("\n  Id = %d\n  Name = %s\n  Salary = %.2f\n",b->id,b->names,b->salary);
       printf("----------------\n");
}

int main(){
    struct Employee b[10],temp;
    int i,j;
    
    for( i=0;i<5;i++){
        b[i]= input();
    }
    
    for ( i = 0; i < 5; i++)
    { for(j=i+1;j<5;j++)

        if(strcmp(b[i].names,b[j].names)>0){
           temp = b[i];
           b[i] =  b[j];
           b[j]= temp;
        }
    }

    printf("----------Sorted String------------\n");
    for(i=0;i<5;i++){
       display(&b[i]);
    }
    
    
        return 0;
}
