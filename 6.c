/*6. Write a program to print greater between two numbers. Print one number of both are
the same.*/

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number : ");
    scanf("%d %d",&a, &b);
    if(a>b)
        printf("a=%d is greater number",a);
    else if(b>a)
            printf("b=%d is greater number",b);
         else
            printf("a=%d and b=%d both are same number",a,b);   
    return 0;
}