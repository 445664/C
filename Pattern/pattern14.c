/*
A B C D E F G F E D C B A
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A 

*/

#include<stdio.h>


int main(){

    int n = 7 ; // take user input
    char ch = 'A';

    // printf("Enter No of Rows: ");
    // scanf("%d",&n);

    for(int i = n; i > 0; i--){
        
        for(int j = 0; j < i; j++){
           printf("%c ",ch+j);
        }
        for(int k = 0; k < (n-i)*2-1  ; k++){
           printf("  ");
        }
        
        for(int j = i; j > 0; j--){
           
            if(j != n)
             printf("%c ",ch+j-1);
        }
           printf("\n");
    } 

    return 0;
}