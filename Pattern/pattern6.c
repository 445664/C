/*

1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
1 0 1 0 1 0

*/

#include<stdio.h>

int main(){
  
    int num = 6;

    for(int i = 1; i <= num ; i++){

        for(int j = 1; j <= i; j++){
            if(j%2)
             printf("1 ");
            else
             printf("0 ");
        }
        printf("\n");
    }

return 0;
}