/* Write a C program to input 10 numbers through the keyboard into an array and display the results of addition of even numbers and product of odd numbers.
*/


#include<stdio.h>

int main(){

    int n = 10;
    int arr[n];

    int sum = 0, product = 1, odd_found = 0;

    printf("Enter Array Elements: \n");
    for(int i = 0; i<n; i++)
     scanf("%d",&arr[i]);

    for(int j = 0; j<n; j++){
        if(arr[j]%2){
         product *= arr[j];
         odd_found = 1;
        }
        else 
         sum += arr[j];
    }

    printf("Sum of even Numbers = %d \n",sum);
    if(odd_found)
     printf("product of odd numbers = %d \n",product);
    else
     printf("There are no odd numbers. \n");

    return 0;
}