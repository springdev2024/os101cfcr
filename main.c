#include <stdio.h>

long factorial(int num)
{
    long fact = 1;
    for (int i = 2; i <= num; i++)
        fact = fact * i;
    return fact;
}

int main()
{
    printf("Factorial = %ld", factorial(5));
    return 0;
}