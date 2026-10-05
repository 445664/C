/*
       *
      ***
     *****
    *******
   *********
  ***********
 *************
  ***********
   *********
    *******
     *****
      ***
       *
*/

#include<stdio.h>

int main(){

  int num=7;


  for(int i = 0; i < num; i++){

    for(int k = num-1 ; k > i; k--)
      printf(" ");
    for(int j = 0; j < i*2+1 ; j++)
      printf("*");

     printf("\n");
  }

  for(int i = num-1; i > 0; i--){
    for(int k = i; k < num; k++)
      printf(" ");
    for(int j = i*2-1; j > 0; j--)
      printf("*");

      printf("\n");
  }
  return 0;
}