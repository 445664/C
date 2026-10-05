/*
Write a program to reverse last three digit from the given number.
 Take input from user.
 Example--------Input num=12456
 Output------12654 

*/


#include<stdio.h>

int main(){
   
    int num, temp = 0, divisor=1, n=3, d;

    printf("Enter Num: \n");
    scanf("%d",&num);
    
    for(;n>0;num/=10){
        d = num % 10;
        temp = temp*10 + d;
        divisor = divisor*10;
        n--;
    }

    num = num*divisor + temp;

   printf("Revesed Last three digits: %d",num);


    return 0;
}