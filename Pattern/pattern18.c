/*
E D C B A             * 4 3 2 1             I G E C A
  D C B A               * 3 2 1               G E C A
    C B A                 * 2 1                 E C A
      B A                   * 1                   C A   
        A                     *                     A
//For N=5----------------------------------------------------
*/


#include<stdio.h>

int main(){

    int num;

    printf("Enter a num: \n");
    scanf("%d",&num);


    //pattern 1: 
    for(int i=0; i<num; i++){
        for(int k = 0; k < i; k++){
            printf("  ");
        }

        for(int j = num; j>i; j--){
            printf("%c ",64+j-i);
        }
        printf("\n");
    }

   printf("\n\n");

  //pattern 2:
    for(int i=0; i<num; i++){
        for(int k = 0; k < i; k++){
            printf("  ");
        }

        for(int j = num; j>i; j--){
            if(j==num)
             printf("* ");
            else
              printf("%d ",j-i);
        }
        printf("\n");
    }

   printf("\n\n");

  //pattern 3:
   
    for(int i=0; i<num; i++){

       for(int k = 0; k < i; k++){
            printf("  ");
        }

        for(int j = num; j>i; j--){
            printf("%c ",64+(j-i)*2-1);
        }
        printf("\n");
    }


  return 0;
}