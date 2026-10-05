/*
 a C program to input 10 numbers through the keyboard and find the number
 of prime numbers count, store them into a seperate array and display it.
*/


#include<stdio.h>

int main(){

    int arr[10];
    
    int prime[10] = {0},count=0;

    printf("Enter array elements: \n");
    for(int i = 0; i<10; i++)
      scanf("%d",&arr[i]);

    for(int j = 0 ; j < 10 ; j++){
        int i;
        for(i = 2; i < arr[j]; i++){
            if(arr[j] % i == 0 )
             break;
        }
        
        if(i == arr[j]){
            prime[count] = arr[j];
            count++;
        }
    }  

    printf("Count of Prime numbers = %d\n",count);
    
    printf("Prime numbers are: ");
    for(int i = 0; i<count; i++)
      printf("%d ",prime[i]);
}