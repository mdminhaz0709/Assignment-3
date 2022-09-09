/*3. Write a program to check whether a given number is an even number or an odd
number.*/
#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number:");
    scanf("%d",&i);
    if (i%2==0)
        printf("%d is an even number",i);
    else
        printf("%d is an odd number",i);
    return 0;
}