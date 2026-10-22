/*
Write a program to add all digits of a given three digit numberand 
if the result is even and divisible by 4 then only print the sum 
otherwise print No result on terminal. 
Example: 
1) int num=222; 
Here sum is 6  which is even but not divisible by 4 so output is No result 
2) int num=242; 
Here sum is 8 which is even and divisible by 4 so output is Result is 8 
Check sum is even and divisible by 4 using conditional operator.
*/

#include<stdio.h>

int main(){

    int num, sum=0;

    printf("Enter a three digit num:\n");
    scanf("%d",&num);

    while(num){
        sum = sum + num%10;
        num /= 10;
    }

    sum%2 ? printf("No result") : (printf("Sum = %d",sum));
    return 0;
}