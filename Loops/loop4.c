//Write a program to add first 2 odd digits from the given number using goto. 

#include<stdio.h>

int main(){
    int num,sum=0,d,count=0;

    printf("Enter a Num: \n");
    scanf("%d",&num);

    add:
      d = num % 10 ;
      num = num / 10;
      if(d % 2 == 1){
        sum = sum + d;
        count++;
      }
      if(count<2)
        goto add;
      else
        printf("Sum = %d \n",sum);

    return 0;
}