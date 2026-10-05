/*
Write a program to reverse all digits except first and last digit. Take input from the user.
 Example: num=1254
  Output ---------1524
 Example: num=45697
  Output -------- 49657
*/
#include<stdio.h>

int main(){

    int num,temp=0,divisor=10,d,f;

    printf("Enter Num: \n");
    scanf("%d",&num);
    
    f = num % 10;
    num = num/10;
    for(;num>=10;num/=10){
        d = num % 10;
        temp = temp*10 + d;
        divisor *= 10;
    }

    num = num*divisor + temp*10 + f;

    printf("num= %d",num);

    return 0;
}