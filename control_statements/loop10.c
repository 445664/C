/*
Write a program to print the largest digit from the given number.
Take input from user.
Example-----Input ---num=58471
 Output-------8
 Use do while loop to write the logic.
*/
#include<stdio.h>

int main(){

    int num,l=0,d;
    
    printf("Enter Num: \n");
    scanf("%d",&num);
    
    for(;num>0;num /= 10){
        d = num % 10;
        if(d>l)
         l = d;
    }
    printf("largest digit = %d \n",l);

    return 0;
}