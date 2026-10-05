/*
Write a program to count set bit in second and third byte combiningly. Take a number from user
 Example:  num=2045
   00000000 00000000 00000111 11111101
  Output----- 3
*/

#include<stdio.h>

int main(){
   
    int num,count=0;

    printf("Enter Num: \n");
    scanf("%d",&num);

    for(int i = 23; i>7; i--){
       
        if(num>>i & 1)
          count++;
    }

    printf("Count = %d",count);

    return 0;
}