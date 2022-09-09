//12. Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a alphabet: ");
    scanf("%C",&ch);
    if(ch>='a' && ch<='z')
        printf("Lowercase alphabet");
    else
        printf("Uppercase alphabet");

    return 0;
}