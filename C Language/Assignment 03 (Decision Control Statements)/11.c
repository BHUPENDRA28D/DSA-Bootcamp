#include<stdio.h>

int main(){
    float Maths ,DSA, SQLite, JAVA ,OS, result; 
    printf("Enter Marks of 5 subject out of 100\n");
    printf("\n---------------------------\n");
    printf("Maths  --  ");
    scanf("%f",&Maths);
    printf("\nDSA  --  ");
    scanf("%f",&DSA);
    printf("\nSQLite  --  ");
    scanf("%f",&SQLite);
    printf("\nJAVA  --  ");
    scanf("%f",&JAVA);
    printf("\nOS  --  ");
    scanf("%f",&OS);
    printf("\n---------------------------\n");

    result= (Maths+DSA+SQLite+JAVA+OS)/500*100;
    if(Maths >= 33 && DSA >= 33&&  SQLite >= 33&& JAVA>= 33&& OS >= 33)
        printf("Student got pass with %.2f",result);

    else    
        printf("Student got Failed");
    return 0;
}