/*

1
2 6
3 7 10
4 8 11 13
5 9 12 14 15 

*/

#include<stdio.h>

int main(){
  
    int num = 5;
  
    for(int i = 1; i <= num ; i++){
        
        printf("%d ",i);
        int k = num-1 + i;
        for(int j = 1; j < i; j++){ 
            
            printf("%d ", k);
            k = k + num - 1 - j;
            
        }

        printf("\n");
    }

return 0;
}