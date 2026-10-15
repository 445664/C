/*
 Write a C program to implement the stack using arrays.
*/

#include<stdio.h>
#define size 100
int arr[size],n=0,ch=0;

void push(int[], int, int);
int pop(int[], int);
void print(int[], int);


int main(){
 while(1){
    printf("1. Push.\n");
    printf("2. Pop. \n");
    printf("3. Print stack. \n");
    printf("exit (ctrl+c) \n\n");

    scanf("%d",&ch);

    switch(ch){
        case 1: 
            if(n==size)
              printf("Stack is already full.\n");
            else{
              printf("Enter data to push: \n");
              int data;
              scanf("%d",&data);
              push(arr,n,data);
              n++;
            }
            break;
        case 2: 
            if(n==0)
              printf("Stack is already empty.\n");
            else{
              int data = pop(arr,n);
              printf("pop --> %d \n\n",data);
              n--;
            }
            break;
        case 3: 
            if(n==0)
              printf("Stack is empty.\n");
            else{
              print(arr,n);             
            }
            break;
        default :
           printf("Enter valid");
           break;
    }
 }
}

void push(int arr[], int n, int data){
    int i;
    for( i = n; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[i] = data;
}

int pop(int arr[],int n){
    int data = arr[0];
    for(int i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    }

    return data;
}

void print(int arr[], int n){
    printf("Stack: \n");
    for(int i = 0; i<n; i++)
      printf("%d \n",arr[i]);
}