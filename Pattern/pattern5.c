/*

1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
4*4*4*4
3*3*3
2*2
1

*/



#include<stdio.h>

int main(){
  
    int num = 5;

    for(int i = 1; i <= num ; i++){
        
        printf("%d",i);

        for(int j = 1; j < i; j++){
            printf("*%d",i);
        }
        printf("\n");
    }

    for(int i = 4 ; i > 0; i--){
        
        printf("%d",i);
        for(int j = i ; j > 1 ; j--){
            printf("*%d",i);
        }
       
        printf("\n");
    }

return 0;
}