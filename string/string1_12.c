/*
Write a program to make last character of each word upper to lower(if it is upper 
case) or lower to upper case(if it is lower case). 
Take string from user. 
Example:-----char s[]="abcde 1234 Pqrst v26Be4 12ab" 
Output:-------        "abcdE 1234 PqrsT v26Be4 12aB"
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
    if(s[i+1] == ' '){
       if((s[i]<= 'z' && s[i]>= 'a') || (s[i]<= 'Z' && s[i]>= 'A'))
       {
         s[i] = s[i] ^ 1u<<5;
        }
    }
     
    i++;
 }
 i--;
 if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
 {        
    s[i] ^= (1u << 5);
 }

 printf("UPPERCASE STRING=%s\n",s);
 
}