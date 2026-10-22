/*
 Write a program to add digit from the given number until first odd digit encounter.  
  Take input from user.
   Example ----------Input num=13444  (3 is first odd digit so add 4+4+4)
   Output-------4+4+4---12

*/

#include<stdio.h>

int main(){

    int num,sum = 0, d;
    printf("Enter Num: \n");
    scanf("%d",&num);
    do{
        d = num % 10;
        if(d%2==1){
          break;
        }
        else
         sum += d;
    }while(num=num/10);

    printf("Sum until first odd digit: %d", sum);

    return 0;

}