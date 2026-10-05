/*
Write a C program to reverse the elements of a given array.
*/

#include<stdio.h>

int main(){

int n;
printf("Enter numbers of Array elements: \n");
scanf("%d",&n);

int arr[n];
printf("Enter array elements: \n");
for(int i = 0; i<n; i++)
 scanf("%d",&arr[i]);

int temp;
for(int j = 0; j<n/2; j++){
  temp = arr[j];
  arr[j] = arr[n-j-1];
  arr[n-j-1] = temp;
}

printf("Reversed array elements: \n");
for(int i = 0; i<n; i++)
 printf("%d ",arr[i]);
    
return 0;
}