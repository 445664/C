/*
Write a program to add digit between first and last digit.
 Take input from user.
 Example------Input ----num=12365                   
 Output--------sum=2+3+6---11

*/

#include<stdio.h>

int main(){

    int num,d,sum = 0;
    
    printf("Enter Num: \n");
    scanf("%d",&num);
    

    do{
        num = num / 10;
        if(num<10)
          break;
        sum = sum + num % 10;
    }while(num>0);
    
    printf("Sum = %d \n",sum);

    return 0;
}