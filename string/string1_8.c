/*
Write a program to make all small case letter to upper case in only first word. 
Take string from user. 
Example: char s[]="abcde 12345 v26be4" 
Output:---- "ABCDE 12345 v26be4"
*/

#include<stdio.h>

void main()
{
 char s[100];

 printf("Enter a string: \n");
 scanf("%[^\n]",s);

 int i=0;
 while(s[i] != ' ')
 {
    if(s[i]<= 'z' && s[i]>= 'a')
    {
         s[i] = s[i] ^ 1u<<5;
    }
    i++;
 }
 printf("UPPERCASE STRING=%s\n",s);
 
}