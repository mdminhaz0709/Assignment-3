/*10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.*/

#include <stdio.h>  
   
int main() {  
    int costPrice, sellingPrice;
    printf("Enter Cost Price and Selling Price\n");  
    scanf("%d %d", &costPrice, &sellingPrice);
       
    if(costPrice > sellingPrice) {   
        printf("Loss = %d\n", costPrice - sellingPrice);  
    } else if(sellingPrice > costPrice) {
        printf("Profit = %d\n", sellingPrice - costPrice);  
    } else 
        printf("No Profit and No Loss\n");    
   
    return 0;  
}
