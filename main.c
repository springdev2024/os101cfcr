#include <stdio.h>

long factorial(int num)
{
    long f = 1;
    for (int i = 2; i <= num; i++)
        f = f * i;
    return f;
}

long pow(int base, int exponent) {
    long res = base;
    for(int i = 2; i <= exponent; ) {
        res = res * base;
    }
    return res;
}

int main()
{
    printf("Factorial = %ld", factorial(5));
    printf("Power(5, 3) = %ld", pow(5, 3));
    return 0;
}