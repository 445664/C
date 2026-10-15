#include<stdio.h>

int main(){
   
    int num, temp=0;

    printf("Enter number: ");
    scanf("%d",&num);

    while(num){
        int d = num % 10;
        num = num / 10;
        temp = temp*10 + d;
    }

    printf("num = %d",temp);
    
    return 0;
}