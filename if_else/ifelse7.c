#include<stdio.h>

int main(){

    int num,n;

    printf("Enter Num:");
    scanf("%d",&num);
    
    printf("Enter Pos: ");
    scanf("%d",&n);

    num = num ^ 7<<n;

    printf("%d",num);

    return 0;
}