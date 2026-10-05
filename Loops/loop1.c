//Write a program to add alternate digit in a given number

#include<stdio.h>

int main(){

 int num,sum=0;
 printf("Enter a Num: \n");
 scanf("%d",&num);

 for(int i = 0; num > 0 ; i++){
   if(i%2 == 0)
    sum = sum + num%10 ; 
   
   num = num/10;
 }
 printf("Sum = %d\n",sum);

 return 0;
}