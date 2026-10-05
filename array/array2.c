#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40};
    int *p = a;

    printf("%d\n", *(a + 1));
    printf("%d\n", 2[p]);
    printf("%d\n", *(p + 3));

    return 0;
}