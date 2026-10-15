/*
 Write a program to copy the elements of one array into another array without duplicate items as a first slot, and store duplicate elements as a second slot.
  
     Ex:   source array       : {10,2,4,5,2,1,3,4,6,5,8,9,2}
           destination arrays : {10,2,4,5,1,3,6,8,9} ,   {2,2,4,5} 
                                  first slot              second slot
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

int dest[n],m=0;

int i,j;
for(i = 0; i<n; i++){
      for(j=i+1; j<n ; j++){
         if(arr[i]==arr[j]){
            dest[m] = arr[i];
            m++; 
            for(int k = j; k<n-1; k++){
               arr[k] = arr[k+1];
            }
         n--;
         j--;
        }
    }
}

printf("After: \n");
printf("first slot: ");
for(int k=0;k<n;k++)
  printf("%d ",arr[k]);
printf("second slot: ");
for(int k=0;k<m;k++)
  printf("%d ",dest[k]);
return 0;
}