/*

//Try to do every pattern in generic way.
//Take input from user for every pattern.
*           E             2
* A         E D           2 *
* B *       E D C         2 * 5
* C * *     E D C B       2 * 5 7
* D * * *   E D C B A     2 * 5 7 11

*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter Num: \n");
    scanf("%d",&num);

    // Pattern 1
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(j == 1)
                printf("%c ", 64 + i);
            else
                printf("* ");
        }

        printf("\n");
    }

    printf("\n\n");


    printf("\n\n");
    
    // Pattern 2
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%c ", 64 + num - j);
        }

        printf("\n");
    }
    

    //Pattern 3
    int k;
    
    for(int i = 1; i<=num; i++){

     for(int j = 0,n=2; j<i;n++){
        for(k=2;k<n; k++){
            if(n%k==0)
             break;
        }
        if(n==k){
            j++;
            if(n!=3)
             printf("%d ",n);
            else
             printf("* ");
            
        }
     }

     printf("\n");
    }


return 0;
}