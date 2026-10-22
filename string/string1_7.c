/*
Write a program to make all small case letter to upper case in a given string. 
Take string from user. 
Example: char s[]="AbcDe 12345 V26Be4" 
Output:-----------“ABCDE 12345 V26BE4” 
*/
#include<stdio.h>

void main()
{
 char s[100];

 printf("Enter a string: \n");
 scanf("%[^\n]",s);

 int i=0;
 while(s[i])
 {
    if(s[i]>= 'a' && s[i] <= 'z')
    {
         s[i] = s[i] ^ 1u<<5;
    }
    i++;
 }
 printf("UPPERCASE STRING=%s\n",s);
 
}