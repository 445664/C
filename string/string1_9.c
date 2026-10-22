/*
Write a program to make all small case letter to upper case in only last word. 
Take string from user. 
Example: char s[]="abcde 12345 v26be4" 
Output:---- "abcde 12345 V26BE4"
*/

#include<stdio.h>

void main()
{
 char s[100];

 printf("Enter a string: \n");
 scanf("%[^\n]",s);

 char *p = s;
 while(*p)
  p++;
 
 while(*p-- != ' ')
 {
    if(*p<= 'z' && *p>= 'a')
    {
         *p = *p ^ 1u<<5;
    }
 }
 printf("UPPERCASE STRING=%s\n",s);
 
}