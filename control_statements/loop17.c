/*
Write a program to count the number of times the digit occurs in the number. Take a number and a digit from user.
 Example :  num=1254454    dig=4
  Output---------3

*/

#include<stdio.h>

int main(){
   
    int num,digit,count=0;

    printf("Enter Num: \n");
    scanf("%d",&num);
    printf("Enter Digit: \n");
    scanf("%d",&digit);


    for(;num>0;num/=10){

        if(num%10 == digit)
          count++;
    }

    printf("Count = %d \n",count);


    return 0;
}