#include <stdio.h>

int main()
{
    int x = 40;

    int square = x*x;

    printf("Square of x is %d\n", square);
    
    printf("This is 1st file\n");

<<<<<<< HEAD
    int y, z;
    
    y = 10;

    z = 20;

    x = y + z;

    printf("Value of x = %d\n", x);
=======
    int *ptr;

    int var;

    var = &ptr;

    *ptr = 100;

    printf("value of var = %p\n", *ptr);
>>>>>>> feature1

    return 0;
}