/*10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.*/

#include<stdio.h>
int main()
{
    float cp,sp,profit,lass;
    printf("Enter the cost price and selling price of a product : ");
    scanf("%f %f",&cp,&sp);

    if(cp < sp)
        printf("%f",profit=sp-cp/cp*100);
    else
        printf("%f",lass=cp-sp/cp*100);

    return 0;

}

