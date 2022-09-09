/* 9. Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times.*/

#include<stdio.h>
int main()
{
   int a,b,c,result;
   printf("Enter three number : ");
   scanf("%d %d %d",&a,&b,&c);

   /* 1st method
   if(a>b && a>c)
        printf("%d is greatest number",a);
   else if(b>c)
        printf("%d is greatest number",b);
   else
        printf("%d is greatest number",c); */

   /* 2n method
   if(a>b)
        if(a>c)
            printf("%d is greatest number",a);
        else 
            printf("%d is greatest number",c);
   else
        if(b>c)
            printf("%d is greatest number",b);
        else 
            printf("%d is greatest number",c); */

    /* 3rd method
    if(a>b)
        a>c ? printf("%d is greatest number",a) : printf("%d is greatest number",c);
    else 
        b>c ? printf("%d is greatest number",b) :  printf("%d is greatest number",c); */

    /* 4th method    
    a>b ? a>c ? printf("%d is greatest number",a) : printf("%d is greatest number",c) : b>c ? printf("%d is greatest number",b) :  printf("%d is greatest number",c); */

    //result = a>b ? a>c?a:c : b>c?b:c; 5th method
    result = a>b && a>c?a:b>c?b:c;
    printf("%d",result);
    
    return 0;
} 