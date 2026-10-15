/*
Write a C program to input 10 numbers through the keyboard into an array and find the
biggest and smallest number in an Unsorted array without using any Sorting Technique.
*/

#include<stdio.h>

int main(){

    int arr[10];
    int big=0, small=0;

    printf("Enter Array elements: \n");
    for(int i = 0 ; i < 10; i++)
     scanf("%d",&arr[i]);

    big = small = arr[0];

    for(int i = 0; i < 10; i++){
        if(arr[i]>big)
         big = arr[i] ;
        if(arr[i]<small)
         small = arr[i] ;
    }

    printf("Biggest is %d and Smallest is %d from above array \n", big, small);

  return 0;    
}