/*
Write a program to count digits in a whole string. 
Take string from user. 
Example: char s[]="abcde 12345 v26be4" 
Output:----Digits Count---8 
*/

#include<stdio.h>

void main()
{
 char s[100];

 printf("Enter a string: \n");
 scanf("%[^\n]",s);

 int i=0,c=0;
 while(s[i])
 {
    if(s[i]>='0' && s[i]<='9')
    c++;
    i++;
 }
 printf("count of digit=%d\n",c);
 
}