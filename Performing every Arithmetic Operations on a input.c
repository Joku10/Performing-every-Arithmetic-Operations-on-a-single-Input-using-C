#include <stdio.h>
int main()
{
    int a = 10, b = 4, arithmetic;
    
    printf("The Value of a is %d and value of b is %d\n", a, b);

    arithmetic = a + b;
    printf("a + b is %d\n", arithmetic);

    arithmetic = a * b;
    printf("a * b is %d\n", arithmetic);

    arithmetic = a - b;
    printf("a - b is %d\n", arithmetic);

    arithmetic = a / b;
    printf("a / b is %d\n", arithmetic);

    arithmetic = a % b;
    printf("a %% b is %d\n", arithmetic);
}