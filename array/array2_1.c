/*
Write a program to replace the each element of the array by sum of even digits
present in that element. Take array element from user.
Example: a[5]={125,254,478,9854,254};
Output:---------={2,6,12,12,6};
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
    


    int sum=0,i=0;

  for(i = 0; i < n; i++){
    sum = 0;
    while(arr[i]){

        int d = arr[i] % 10;

        if(d % 2 == 0)
          sum = sum + d;

        arr[i] /= 10;
    }
    arr[i] = sum ;
}

for(int j = 0; j < n; j++ )
 printf("%d ",arr[j]);

 return 0;
}