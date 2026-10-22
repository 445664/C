/*
Write a program to make first character of each word upper to lower(if it is upper 
case) or lower to upper case(if it is lower case). 
Take string from user. 
Example:-----char s[]="abcde 1234 Pqrst v26Be4" 
Output:-------        "Abcde 1234 pqrst V26Be4"
*/

#include<stdio.h>

void main()
{
 char s[100];

 printf("Enter a string: \n");
 scanf("%[^\n]",s);

 int i=0;
 
 if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
 {        
    s[i] ^= (1u << 5);
 }

 i++;

 while(s[i])
 {  
    if(s[i-1] == ' '){
       if((s[i]<= 'z' && s[i]>= 'a') || (s[i]<= 'Z' && s[i]>= 'A'))
       {
         s[i] = s[i] ^ 1u<<5;
        }
    }
     
    i++;
 }
 printf("UPPERCASE STRING=%s\n",s);
 
}