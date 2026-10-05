//Write a program to add odd digit from the given number using goto.

#include<stdio.h>

int main(){
    int num,sum=0,d;
    printf("Enter a Num: \n");
    scanf("%d",&num);
    add:
     d = num % 10;

     if (d%2 == 1)
      sum = sum + d;

     num = num /10;

     if(num != 0)
      goto add;
     else
      printf("Sum = %d \n",sum);
return 0;
}