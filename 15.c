// 15. Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if (n>0)
        printf("Number is positive");
    else if(n<0)
        printf("Number is Negative");
    else
        printf("Number is Zero");
    return 0;
}
