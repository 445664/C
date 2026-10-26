/*
Write a program to print the length of each word except first and last word. 
Take string from user. 
Example:---char s[]="abcd 12345 pqrstuv wxyz v26be4" 
Output------5   7   4
*/

#include<stdio.h>

void main(){

    char s[100];

    printf("Enter a String : \n");
    scanf("%[^\n]",s);

    char *p = s;
    char *q = s;
    int length = 0;
    
    while(*p)
        p++;
    p--;


    while(*p != ' ' && p>=s)
        p--;

     printf("%d ",length);
} 