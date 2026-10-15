/*
Write a C program to delete an element at desired position from an array.
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

int pos;
printf("Enter desired Position: \n");
scanf("%d",&pos);

for(int i = pos-1; i < n-1; i++){
    arr[i] = arr[i+1];
}
n--;

printf("Array after Deletion on element from postion: ");
for(int i = 0 ; i < n; i++)
 printf("%d ",arr[i]);
}