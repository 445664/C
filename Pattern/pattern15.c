/*
//pascal Triangle
      1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
 1 5 10 10 5 1 

*/

#include<stdio.h>

int main(){

    int num = 6;

   for(int i = 1; i<=6; i++){
 
      for(int k = 0; k < num-i ; k++)
        printf("_");
      
      for(int j = 1; j <=i; j++){
    
        int fact_j=1,fact_i=1,fact_i_j=1;

        for(int f = 1; f<=j-1; f++ ){
           fact_j *= f;
        }
        for(int f = 1; f<= i-1; f++ ){
           fact_i *= f;
        }
        for(int f = 1; f<=(i-j); f++ ){
           fact_i_j *= f;
        }
        int fact = fact_i / fact_j/ fact_i_j;
        printf("%d ",fact);
      }

    printf("\n");
   }

   return 0;
}