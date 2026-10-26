/*
Write a program to print the length of first word in a given string. 
Take string from user. 
Example:---char s[]="abcde 12345 v26be4" 
Output------5
*/

#include<stdio.h>

void main(){

    char s[100];

    printf("Enter a String : \n");
    scanf("%[^\n]",s);

    char *p = s;
    int length = 0;

    while(*p != ' ' && *p != '\0'){
         length++;
         p++;
    }
     printf("%d ",length);
} 