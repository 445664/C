/*
Write a program to print first odd digit from left.
 Take input from user.
 Example --Input--num=33456
 Output-----------5.
*/

#include<stdio.h>

int main(){
  
  int num,d,od;

  printf("Enter Num: \n");
  scanf("%d",&num);

  for(;num>0;){

    if((num % 10)%2 == 1){
     od = num % 10;
    }
    num /= 10;

  }

  printf("First odd digit from left: %d\n",od);

    return 0;
}
