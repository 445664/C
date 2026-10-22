/*Write a program to add first and last digit of a given three digit 
number without using loop. 
Example:  int num=283; 
 Output-------2+3=5
*/


#include<stdio.h>

int  main(){
   int num,sum=0;
   printf("enter a Num: \n");
   scanf("%d",&num);
   
   if(num)
     sum = sum + num % 10;
   else
     return 0;
   add: 
   if(num < 10){
    sum = sum + num %10;
    printf("Sum = %d \n",sum);
   }
  else {
   num /= 10;
   goto add;
  }

  return 0; 
}