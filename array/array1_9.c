/*
Write a C program to find the duplicate elements of a given array and find the count of duplicated elements.
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

int count=1;

for(int i = 0; i<n; i++){
    count = 1;
    for(int j=i+1; j<n ; j++){
        if(arr[i]==arr[j]){
            count++ ;
            for(int k = j; k<n-1;k++){
               arr[k] = arr[k+1];
            }
            n--;
            j--;
        }
    }
    if(count > 1)
     printf("%d is duplicate ---> %d times",arr[i],count);
}

return 0;
}

