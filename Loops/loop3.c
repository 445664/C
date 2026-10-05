//Write a program to add digits except first and last digits using goto

#include<stdio.h>

int main(){
    int num, d, sum = 0;

    printf("Enter a Num: \n");
    scanf("%d",&num);

    num = num / 10;

    add:
      
      if (num >= 10){
        d = num % 10;
        sum = sum + d;
        num = num/10;
        goto add;
      }
      else
      printf("sum = %d",sum);
    
    return 0 ;
}