
/*
0                     a                     1  
0 1                   c a                   0 1
0 1 1                 f c a                 1 0 1
0 1 1 2               j f c a               0 1 0 1
0 1 1 2 3             o j f c a             1 0 1 0 1
//For N=5----------------------------------------------------
*/


#include<stdio.h>

int main(){

    int num;

    printf("Enter a num: \n");
    scanf("%d",&num);


    //pattern 1: 
    int sum1,sum2,sum3;

    for(int i=0; i<num; i++){

        for(int j = 0; j<=i; j++){
           if(j==0)
            printf("%d ",sum1=0);
           else if(j==1)
            printf("%d ",sum2=1);
           else{
            printf("%d ",sum3 = sum1+sum2);
            sum1=sum2;
            sum2=sum3;
           }
        }
        printf("\n");
    }

   printf("\n\n");

  //pattern 2:
  int n=0;
  for(int i = 1; i<=num; i++){
    n = n+i;
    
    for(int j = i,k=n; j>0; j--){
        printf("%c ", 96+k);
        k=k-j;
    }
   printf("\n");
  }

   printf("\n\n");
  //pattern 3:
   
  for(int i = 1; i <= num; i++){
    for(int j = 0; j<i; j++){
        printf("%d ",(i+j)%2);
    }
    printf("\n");
  }


  return 0;
}