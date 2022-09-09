//5. Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a three-digit number : ");
    scanf("%d",&n);
    if(n>99 && n<=1000)
        printf("%d is a three-digit number",n);
    else
        printf("%d is a not three-digit number",n);
    return 0;
}