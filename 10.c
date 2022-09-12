/*10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.*/

#include <stdio.h>  
   
int main() {  
    int costPrice, sellingPrice;
    printf("Enter Cost Price and Selling Price\n");  
    scanf("%d %d", &costPrice, &sellingPrice);
    float proflossper=0;
    float proflossamt;   
    if(costPrice > sellingPrice) {   
        proflossamt=costPrice - sellingPrice;
        printf("Loss = %.2f\n", proflossamt);       
        proflossper=(proflossamt/costPrice)*100; 
        printf("Loss %% = %.2f\n",proflossper); 
    } else if(sellingPrice > costPrice) {
        proflossamt= sellingPrice - costPrice;
        printf("Profit = %.2f\n",proflossamt); 
        proflossper=(proflossamt/costPrice)*100; 
        printf("Profit %% = %.2f\n",proflossper); 
    } else 
        printf("No Profit and No Loss\n");    
   
    return 0;  
}
