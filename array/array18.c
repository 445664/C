/*
Write a program to reverse the alternate element of the array. Take array element from user.
Example:- a[5]={125,2547,7895,87,321}
Output: ---------{521,2547,5987,87,123}
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

    for(int i = 0; i<n; i+=2){
        int temp = 0;

        while(arr[i]){
            int d = arr[i]%10;
            temp = temp*10+d;
            arr[i] /= 10;
        }

        arr[i] = temp;
    }

    for(int j = 0; j < n; j++ )
      printf("%d ",arr[j]);
}