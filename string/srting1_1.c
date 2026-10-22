/*
Write a program to print the input string word by word. 
Example:----char s[]="abcde 1234 V26BE4" 
Output:------abcde 
                    1234 
                    v26be4 
*/

#include<stdio.h>

void main(){
 char s[100];
 printf("Enter a String: \n");
 scanf("%[^\n]",s);
 
 int i = 0;
 while(s[i]){
    if(s[i] == ' ')
     printf("\n");
    else
     printf("%c",s[i]);
    
    i++;
 }

}