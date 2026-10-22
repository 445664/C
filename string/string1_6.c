/*
Write a program to count prime digit present in a given string. 
Take string from user. 
Example: char s[]="Abcde 12345 v26be4" 
Output:----Prime digit--4 
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
    if(s[i]=='2' || s[i]=='3' || s[i]=='5'|| s[i]=='7')
    {
         c++;
    }
    i++;
 }
 printf("count of prime digit=%d\n",c);
 
}