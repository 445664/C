/*Write a program to swap last two digit of a given three digit 
number without using loop. 
Example: int num=256 
Output---------  265
*/


#include<stdio.h>

int main(){
    int num,temp;
    printf("Enter a Three digit num: \n");
    scanf("%d",&num);
    
    int d0 = num%10;
    int d1 = (num/=10)%10;
    int d2 = (num/=10)%10;

    temp = d2*100 + d0*10 + d1;

    printf("Num after: %d \n",temp);

    return 0;
}