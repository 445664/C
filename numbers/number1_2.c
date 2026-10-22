/*
Write a program to swap first and last digit of a given three digit 
number without using loop. 
Example:   int num=129; 
Output-------------921 
*/


#include<stdio.h>

int main(){
    
    int num,temp;
    printf("Enter a Three digit num: \n");
    scanf("%d",&num);
    
    int d0 = num%10;
    int d1 = (num/=10)%10;
    int d2 = (num/=10)%10;

    temp = d0*100 + d1*10 + d2;

    printf("Num after: %d \n",temp);

    return 0;
}