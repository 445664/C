/*
Write a program to reverse the binary in second and third byte. Take input from the user.
Example : num=2045;
               00000000 00000000 00000111 11111101
 Output - 00000000 11100000 00000000 11111101

*/

#include<stdio.h>

int main(){

    int num;

    printf("Enter Num: \n");
    scanf("%x",&num);
   
    for(int i =23,j = 8; i>15; i--,j++){
      
        if((num>>i & 1) != (num>> j & 1)){
            num = num ^ 1 << i;
            num = num ^ 1 << j;
        }

    }

    printf("Num = %08X \n",num);

    return 0;
    
}