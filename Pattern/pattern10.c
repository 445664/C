/*

        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9
  1 2 3 4 5 6 7
    1 2 3 4 5
      1 2 3
        1 

*/

#include<stdio.h>

int main(){
  
    int num = 5;

    for(int i = 1; i <= num ; i++){
        
        for(int k = i ; k < num  ; k++){
            printf("  ");
        }

        for(int j = 1; j < i*2 ; j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    for(int i = num; i > 1; i--){
        
        for(int k = i ; k <= num  ; k++){
            printf("  ");
        }

        for(int j = 1 ; j < i*2-2 ; j++){
            printf("%d ",j);
        }
        printf("\n");
    }

return 0;
}