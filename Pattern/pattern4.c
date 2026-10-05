/*

***********
 *********
  *******
   *****
    ***
     *
    ***
   *****
  *******
 *********
*********** 

*/


#include<stdio.h>

int main(){
  
    int num = 5;

    for(int i = 0; i <= num ; i++){
        
        for(int k=num ; k > num-i; k--){
           printf(" ");
        }
        for(int j = (num-i)*2+1 ; j > 0 ; j--){
            printf("*");
        }
    
        printf("\n");
    }

    for(int i = 0; i < num ; i++){
        
        for(int k= num-i-1; k > 0 ; k--){
           printf(" ");
        }
        for(int j = 0 ; j < 2*i+3  ; j++){
            printf("*");
        }
       
        printf("\n");
    }

return 0;
}