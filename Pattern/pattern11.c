/*

1
2 4
3 6 9
4 8 12 16
5 10 15 20 25
6 12 18 24 30 36 

*/

#include<stdio.h>

int main(){
  
    int num = 6;
  
    for(int i = 1; i <= num ; i++){
       
        for(int j = 1; j <= i; j++){ 
            
            printf("%d ", i*j);
            
        }

        printf("\n");
    }

return 0;
}