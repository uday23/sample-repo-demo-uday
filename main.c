#include <stdio.h>

int main()
{
    int x = 40;

    int square = x*x;

    printf("Square of x is %d\n", square);
    
    printf("This is 1st file\n");

    int *ptr;

    int var;

    var = &ptr;

    *ptr = 100;

    printf("value of var = %p\n", *ptr);

    return 0;
}