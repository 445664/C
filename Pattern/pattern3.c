/*

 * * * * * *
  * * * * *
   * * * *
    * * *
     * *
      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * * 

*/


#include<stdio.h>

int main(){
  
    int num = 6;

    for(int i = 0; i < num ; i++){
        
        for(int k=i ; k > 0; k--){
           printf(" ");
        }
        for(int j = num ; j > i ; j--){
            printf("* ");
        }
       
        printf("\n");
    }

    for(int i = 0; i < num-1 ; i++){
        
        for(int k= 0 ; k < num - i - 2 ; k++){
           printf(" ");
        }
        for(int j = 0  ; j < i+2  ; j++){
            printf("* ");
        }
       
        printf("\n");
    }

return 0;
}