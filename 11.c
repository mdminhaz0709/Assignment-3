/* 11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed. */

#include<stdio.h>
int main()
{
    int phy,ch,math,bio,eng;
    printf("Enter your phy,ch,math,bio and eng marks\n");
    scanf("%d %d %d %d %d",&phy,&ch,&math,&bio,&eng);
    if(phy>=33 && ch>=33 && math>=33 && bio>=33 && eng>=33)
        printf("pass");
    else 
        printf("fail");
    
    return 0;
}
