//Insert 0 at index 3 of an array. keep all element preserved.

#include<stdio.h>

int main(){
    int n =  5, index = 3;
    int arr[6] = {1,2,3,4,5};

    for(int i = n; i > index ; i--){
       arr[i] = arr[i-1];
    }
    arr[index] = 0;
    n++;
    for(int i = 0; i < n ; i++){
        printf("%d ", arr[i]);
    }
}