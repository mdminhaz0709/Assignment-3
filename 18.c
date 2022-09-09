/*18. Write a program which takes the month number as an input and display number of days in that month.*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of month\n");
    scanf("%d",&n);

    // Check for 30 Days
    if(n%3==0)
        printf("30 Days");
    else if(n%2==0)           // Check for 28 or 29 Days
            printf("28 or 29 Days");
    else                            //Check for 31 Days
        printf("31 Days");
        
    return 0;
    
}