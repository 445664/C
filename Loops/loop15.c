
/*
Write a program to add alternate odd digits from the given number.
 Take input from the user.
 Example------Input num=3575449  (here 9,5,7,3 are odd digits but alternate odd digits we need to add) 
 Output--------9+7+3----19


*/

#include<stdio.h>

int main(){

    int num, sum = 0, d;

    printf("Enter a Num: \n");
    scanf("%d",&num);

    for(int i = 0; num>0; num/=10){
        
        d = num%10;
        if(d%2 == 1){
            i++;
            if(i%2 == 1){
                sum += d;
                printf("%d + ",d);
            }
        } 
    }
    printf("Sum of alternate odd digits = %d",sum);
    

    return 0;
}