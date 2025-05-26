#include <stdio.h>

long factorial(int num)
{
    long f = 1;
    if (num ==0 || num==1){
        return 1;
    }
    else{
    return num*factorial(num-1);
    }
  
}

int main()
{
    printf("Factorial = %ld", factorial(5));
    return 0;
}