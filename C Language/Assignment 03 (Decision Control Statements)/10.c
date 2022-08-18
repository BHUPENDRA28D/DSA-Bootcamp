#include<stdio.h>

int main(){
    float costPrice ,sellPrice,loss, profit,LossPercentage ,profitPercentage;

    printf("Enter costPrice of Product::");
    scanf("%f",&costPrice);
    printf("Enter sellPrice of Product::");
    scanf("%f",&sellPrice); 

    loss = costPrice-sellPrice;
    profit = sellPrice- costPrice;

    if(costPrice < sellPrice){
        profitPercentage = profit/costPrice*100;
        printf("Profit % = %f",profitPercentage);
    }
    else if (sellPrice < costPrice)
    {
        LossPercentage = loss/costPrice*100;
        printf("Loss % = %f",LossPercentage);
    }
    else
    {
        printf("\nNO profit No Loss selled on costPrice");
    }
    
    return 0;
}