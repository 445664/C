/*
Write a program to reverse last two digit of a given number.
  Take input from user.
  Example----Input ---num=34253
  Output-------34235
*/

#include<stdio.h>

int main(){

    int num,d,d2 = 1,n,temp = 0;
    
    printf("Enter Num: \n");
    scanf("%d",&num);
    printf("Enter no. of digits to reverse: \n");
    scanf("%d",&n);
    
    for(;n>0;n--){
        d = num % 10;
        num /= 10;
        temp = temp*10 + d;
        d2 = d2 * 10;
    }
    num = num*d2 + temp;
    printf("Num after = %d \n",num);

    return 0;
}