/*
Write a program to print the length of each word in a given string. 
Take string from user. Use goto to find length of each word. 
Example:---char s[]="abcde 12345 v26be4" 
Output------5    5    6 
*/


#include<stdio.h>

int main(){

   
    char s[100];

    printf("Enter a String : \n");
    scanf("%[^\n]",s);

    char *p = s;
    int length = 0;

    newWord: 

      length = 0;
    
    newChar:

    if(*p != '\0'){
     if(*p == ' ')
     {
      printf("%d ",length);
      p++;
      goto newWord;
     }
     else{
       p++;
       length++;
       goto newChar;
     }
    }
    else
     printf("%d ",length);

     return 0;
}