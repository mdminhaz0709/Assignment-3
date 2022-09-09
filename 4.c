/*4. Write a program to check whether a given number is an even number or an odd
number without using % operator.*/

#include<stdio.h>
int main()
{
    int n, result;
    printf("Enter a number:");
    scanf("%d",&n);
    result = n&1;
    if (result==0)
        printf("%d is an Even number",n);
    else
        printf("%d is an odd number",n);
    return 0;
}