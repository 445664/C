/*
Write a program to print last character of each word given in a string. 
Take string from user. 
Example: char s[]="abcde 12345 v26be4" 
Output: ----e 
        ----5 
        ----4 
*/

#include<stdio.h>

void main()
{

    char s[100];

    printf("Enter a string: \n");
    scanf("%[^\n]",s);
    
    int i = 0;

    while(s[i])
    {
      if(s[i+1]==' ' || s[i+1] == '\0'){
        printf("----%c\n",s[i]);
      }
      i++;
    }
    


}