#include <stdio.h>

int factorial(int num)
{
    int f = 1;
    for (int i = 2; i <= num; i++)
        f = f * i;
    return f;
}

int main()
{
    printf("Factorial = %d", factorial(5));
    return 0;
}