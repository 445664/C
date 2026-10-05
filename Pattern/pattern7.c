/*
1
2 4
1 3 5
2 4 6 8
1 3 5 7 9
2 4 6 8 10 12

*/

#include<stdio.h>

int main(){
  
    int num = 6;

    for(int i = 1; i <= num ; i++){
        for(int j = 1; j <= i; j++){
            if(i%2)
             printf("%d ",j*2-1);
            else
             printf("%d ",j*2);
        }
        printf("\n");
    }

return 0;
}