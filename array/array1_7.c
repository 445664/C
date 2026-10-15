/*
Write a C program to insert an element at desired position in an array. 
*/

#include<stdio.h>

int main(){

int n;
printf("Enter numbers of Array elements: \n");
scanf("%d",&n);

int arr[n+1];
printf("Enter array elements: \n");
for(int i = 0; i<n; i++)
 scanf("%d",&arr[i]);

int pos;
printf("Enter desired Position: \n");
scanf("%d",&pos);


int ele;
printf("Enter desired element: \n");
scanf("%d",&ele);

for(int i = n; i > pos-1 ; i--){
    arr[i] = arr[i-1];
}

arr[pos-1] = ele ;

printf("Array after Insertionn on element from postion: ");
for(int i = 0 ; i <= n; i++)
 printf("%d ",arr[i]);

}