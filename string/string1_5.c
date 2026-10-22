/*
Write a program to count vowel in a given string. 
Take string from user. 
Example: char s[]="abcde 12345 v26be4" 
Output:---- Vowel Count-----3 
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
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
    c++;
    i++;
 }
 printf("count of vowels=%d\n",c);
 
}