/*
Write a program to add first two odd digit from the given number.
Take input from user.
 Example--------Input num=32543 (3 and 5 are first 2 odd digit)
  Output---------5+3---8

*/

#include<stdio.h>

int main(){

    int num, sum = 0, d;

    printf("Enter a Num: \n");
    scanf("%d",&num);

    for(int i = 0; i<2 ; num/=10){
        d = num%10;
        if(num<=0)
         break;
        if(d%2 == 1){
            sum = sum + d;
            i++;
        }
    }
    printf("Sum of First two odd digits = %d",sum);


    return 0;
}