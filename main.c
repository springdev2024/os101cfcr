#include <stdio.h>

long factorial(int num)
{
    long f = 1;
    for (int i = 2; i <= num; i++)
        f = f * i;
    return f;
}

int main()
{
    printf("Factorial = %ld", factorial(5));
    return 0;
}
the change