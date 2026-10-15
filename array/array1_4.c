/*
Write a C program to findout second largest and second smallest elements of an unsorted array without using any Sorting Technique.
*/

#include<stdio.h>
#include<limits.h>

int main(){

    int arr[10];
    
    int l,sl,s,ss;

    printf("Enter array elements: \n");
    for(int i = 0; i<10; i++)
     scanf("%d",&arr[i]);
    
    l=sl=INT_MIN;
    s=ss=INT_MAX;

    for(int j = 0; j<10; j++){
        if(arr[j]>l){
            sl = l;
            l = arr[j];
        }
        else if(arr[j]<l && arr[j]>sl){
          sl = arr[j];
        }

        if(arr[j] < s)
        {
            ss = s;
            s = arr[j];
        }
        else if(arr[j] > s && arr[j]<ss)
        {
            ss = arr[j];
        }
    }
    printf("Second largest = %d And Second Smallest = %d \n",sl,ss);

    return 0;
}
