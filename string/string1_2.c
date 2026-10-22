/*
Write a program to print the first character of each word given in a string. 
Take string from user. 
Example: char s[]="abcde 1234 v26be4" 
Output: ----a 
        ----1 
        ----v
*/

#include<stdio.h>

void main(){
 char s[100];

 printf("Enter a String: \n");
 scanf("%[^\n]",s);
 
 int i = 0;
 printf("----%c\n",s[i]);
 while(s[i]){
    if(s[i]== ' '){
        i++;
        printf("----%c\n",s[i]);
    }
    i++;
 }

}