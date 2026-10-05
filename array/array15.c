/*
 Write a C program to evaluate the following series. The series contains sum of
 square of numbers from 1 to 'n'. Strore result of each term in an array. Calculate 
 value of  ' S '  using array.

  S = 1^2 + 2^2 + 3^2 + 4^2 + ------ n^2
    = [ 1, 4, 9, 16, -------- n^2 ]
 
  Suppose n = 4,
  then  S = 1^2+2^2+3^2+4^2;
        S = 1+4+9+16;  
        S = 30.
*/


#include<stdio.h>

int main(){

int n;
printf("Enter value of n: \n");
scanf("%d",&n);

int arr[n],sum=0,i;

for(i = 1; i<=n; i++)
    arr[i-1] = i*i;

for(i=0; i<n ; i++)
  sum += arr[i];

printf("S = %d \n",sum);

return 0;
}