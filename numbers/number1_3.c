/*
Write a program to swap first two digit from left of a given three 
digit number without using loop. 
Example: int num=256 
 Output---------  526
*/

#include<stdio.h>

int main(){
   int num,temp;

    printf("Enter a Three digit num: \n");
    scanf("%d",&num);
    
    int d0 = num%10;
    int d1 = (num/=10)%10;
    int d2 = (num/=10)%10;

    temp = d1*100 + d2*10 + d0;

    printf("Num after: %d \n",temp);

    return 0;
     
}