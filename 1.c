//1. Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number:");
    scanf("%d",&i);
    if (i>=0)
        printf("%d is positive number",i);
    else
        printf("%d is non-positive number",i);
    return 0;
}