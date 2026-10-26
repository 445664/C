/*
Write a program to print the length of each word in a given string. 
Take string from user. 
Example:---char s[]="abcde 12345 v26be4" 
Output------5    5    6 
*/

#include<stdio.h>

void main(){

    char s[100];

    printf("Enter a String : \n");
    scanf("%[^\n]",s);

    char *p = s;
    int length = 0;

    while(*p){
        if(*p == ' '){
            printf("%d ",length);
            length = 0;
        }
        else
         length++;

         p++;
    }
     printf("%d ",length);
} 