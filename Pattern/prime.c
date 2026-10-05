#include<stdio.h>

int main(){

    int num=0,j=2;
    
    for(int num =0; num<=10; num++){
    for(j = 2; j<num; j++){
        if(num%j==0)
         break;
    }
    if(j==num)
      printf(" %d",num);
   }
   return 0;
}