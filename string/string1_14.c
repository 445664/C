/*
Write a program to print binary of first and last character in each word of a given 
string. 
Take string from user. 
Example:-----char s[]="abcde 12345 v26be4" 
Output:-------a---01100001 
              e---01100101 
              1---00110001 
              5---00110101 
              v---01110110 
              4---00110100 
*/


#include<stdio.h>

void printBinary(char *p){
    for(int i = 7; i>=0; i--)
      printf("%d",*p>>i & 1);

    printf("\n");
}

void main(){

    char s[100];

    printf("Enter A String \n");
    scanf("%[^\n]",s);

    char *p = s;
    printf("%c---",*p);
    printBinary(p);
    p++;
    while(*p){
      if(*(p+1) == ' ' || *(p+1) == '\0' || *(p-1) == ' ')
      {
        printf("%c---",*p);
        printBinary(p);
      }
      p++;
    }
}