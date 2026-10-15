/*
Write a program to add prime digit in each array element. Take array element from user.
Example: a[5]={2564,7845,1234,44,586}
Output:----------{7,12,5,0,5
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
       int sum = 0;
       
       while(arr[i])
       {
        int d = arr[i]%10;
        int j;
        for(j = 2; j < d; j++){
            if(d% j == 0)
              break;
        }
        if(d == j)
         sum += d;

        arr[i] /= 10;
       }
      
      
       arr[i] = sum;
    }
    
    for(int j = 0; j < n; j++ )
      printf("%d ",arr[j]);
}