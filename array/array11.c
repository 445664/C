/*
Write a C program which deletes the duplicate elements of an array.
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

int i,j;
for(i = 0; i<n; i++){
      for(j=i+1; j<n ; j++){
         if(arr[i]==arr[j]){
            for(int k = j; k<n-1; k++){
               arr[k] = arr[k+1];
            }
         n--;
         j--;
        }
    }
}

printf("After: ");
for(int k=0;k<n;k++)
  printf("%d ",arr[k]);

return 0;
}