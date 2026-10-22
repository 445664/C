/*
Write a program to make all small case letter to upper case except first and last word. 
Take string from user. 
Example:------char s[]="abcde 1234 pqrst v26be4" 
Output:-------"abcde 1234 PQRST v26be4"
*/

#include<stdio.h>

void main()
{
 char s[100];

 printf("Enter a string: \n");
 scanf("%[^\n]",s);

 char *p = s;
 char *q = s;

 while(*q)
    q++;                       // q points to '\0
  
 while(*q-- !=' ');            // now q points to char before last whitespace
 
 while(*p++ != ' ');          // p will point to char after first whitespace

 while(p<=q){
    if(*p<= 'z' && *p>= 'a')
    {
         *p = *p ^ 1u<<5;
    }
    p++;
 }


 printf("UPPERCASE STRING=%s\n",s);
 
}