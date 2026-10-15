/*
Write a program to count armstrong element from the array. Take array element from
user.
Example: a[5]={370,385,371,8,99}
Output:----count----3
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

    int count=0;

    for(int i = 0; i < n; i++){

        int c=0,sum = 0;
        int num = arr[i];

        while(num){
          num /= 10;
          c++;
        }
    
        num = arr[i];

        while(num){
         int d = num % 10;
         int f = 1;

         for(int j = 0; j < c; j++){
            f = f * d;
         }
        sum += f;
        num /= 10;
        }
  
        if(sum == arr[i]){
            count++;
        }
    }
    

    printf("count = %d \n",count);
}