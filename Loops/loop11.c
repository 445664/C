/*
 Write a program to add all digits except largest digit from the given number.
 Take input from user.
 Example-----Input ---num=58471
 Output-------5+4+7+1-----17
 Use while loop to write the logic.
*/

#include<stdio.h>

int main(){

    int num,l=0,d,sum = 0;
    
    printf("Enter Num: \n");
    scanf("%d",&num);
    
   
    while(num>0){
      d = num % 10;
      if(l < d)
       sum += l;
      if(d>l){
       l = d;
      }
      else
       sum += d;
     
     num /= 10;
     
    }
    printf("sum of digits except largest digit = %d \n",sum);

    return 0;
}