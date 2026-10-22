/*
Write a program to add digit which contain even set bit count using goto.
 Don’t use any loop.
 Example: num=26386  (here 6,3 both digits contain even set bit count)
 Output:-----6+3+6---15
*/

#include<stdio.h>

int main(){

    int num, bit, digit, pos,count = 0, sum = 0;

    printf("Enter Num: \n");
    scanf("%d",&num);

    get_digit:
             digit = num % 10;
             pos = 7;
             count = 0;
    get_binary:
           if(num>0){
              bit = digit >> pos & 1;
              if(bit)
               count++;
              pos--;
              
              if(pos < 0){
               num = num / 10;
               if(count%2 == 0)
                sum += digit;
               goto get_digit;
              }
              else 
                goto get_binary;
           }
           else
            printf("Sum = %d",sum);
    return 0;
            
}