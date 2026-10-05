//You are given an array of integers nums and an integer target, 
//return indices of the two numbers such that they add up to target.
//Input: nums = [2,7,11,15], target = 9
//Output: [0,1]

#include<stdio.h>

int main()
{
    int n;
    printf("Enter Size of array: \n");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter Array elements: \n");
    for(int i = 0; i<n; i++)
     scanf("%d",&a[i]);
    
     
    int sum;
    printf("Enter desired sum: \n");
    scanf("%d",&sum);
    
    
    //solution:
    for(int i = 0; i < n-1; i++){
        for(int j = i + 1; j < n; j++){
          if(a[i] + a[j] == sum){
            printf("Indices are: %d, %d \n",i,j);
            break;
          }
        }
    }
        
    return 0;
}