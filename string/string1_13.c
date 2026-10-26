/*
Write a program to print character in a given string which contain even set bit count. 
Take string from user. 
Example:-----char s[]="abcde 12345 v26be4" 
Output:-------    c,e,3,5,6,e 
*/

#include<stdio.h>

int countSetBit(char *p){
   
    int count = 0;

     for(int i = 0; i<8; i++){
        if(*p>>i & 1)
          count++;
     }

     if(count%2)
      return 0;
     else
      return 1;
}


void main(){

    char s[100];

    printf("Enter a String: \n");
    scanf("%[^\n]",s);
   
    char *p = s;
    while(*p){
       if(countSetBit(p))
         printf("%c ",*p);

     p++;
    }


}
