/*
Write a program to print binary of each digit in a given number using goto.
Don’t use any loop.
Hint: Use nested goto.
Input: Num=1234;
Output:
00000100
00000011
00000010
00000001
*/

#include<stdio.h>

int main(){

    int num, bit, digit, pos;

    printf("Enter Num: \n");
    scanf("%d",&num);

    get_digit:
             digit = num % 10;
             pos = 7;
    get_binary:
           if(num>0){
              bit = digit >> pos & 1;
              printf("%d",bit);
              pos--;
              
              if(pos < 0){
               printf("\n");
               num = num / 10;
               goto get_digit;
              }
              else 
                goto get_binary;
           }
    return 0;
            
}