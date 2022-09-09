// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a%2==0 && a%3==0)
        printf("%d is divisible by 3 and 2.",a);
    
    //In case of divisible by either 2 or 3.    
    else if(a%2==0)
         printf("%d is divisible by 2.",a); 
    else if(a%3==0)
        printf("%d is divisible by 3.",a);
    else 
        printf("%d is not divisible by 3 and 2.",a);
         

    return 0;
}