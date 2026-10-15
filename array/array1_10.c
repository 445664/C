/*
Write a program to print the non repeted numbers of  a given array.
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


for(int i = 0; i<n; i++){
    int count = 1;
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

    if(count>1){
      for(int k = i; k<n-1;k++){
               arr[k] = arr[k+1];
            }
            n--;
            i--;  
    }
}

printf("Array after: ");
for(int i = 0 ; i < n; i++)
 printf("%d ",arr[i]);
return 0;
}

