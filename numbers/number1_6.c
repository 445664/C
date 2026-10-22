/*
Write a program to set n bits from a given position. Take n value 
and position  from user if any bit already set in that n bits then that 
bit should be clear. 
*/

#include<stdio.h>

int main(){
    
    int num, n, pos;
    printf ("enter a num: ");
    scanf("%d",&num);

    printf("enter pos: ");
    scanf("%d", &pos);

    printf("enter n: ");
    scanf("%d",n);

    
    num = num ^ ((1u << n) -1)<< pos;
    
    printf("Num: %d", num);

    return 0;
}