/*
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

*/

#include<stdio.h>

int main(){
  
    int num;

    printf("Enter a num: \n");
    scanf("%d",&num);


    for(int i = 1; i <= num ; i++){
        
        for(int j = 1; j <= i; j++){ 
            
            printf("%d ", j);
            
        }
        for(int k = (num-i)*2; k > 0; k--){
            printf("  ");
        }
        for(int j = i; j > 0; j--){ 
            
            printf("%d ", j);
            
        }

        printf("\n");
    }

return 0;
}