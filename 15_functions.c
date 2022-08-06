#include <stdio.h>

void printhello()
{
    printf("Hello World");
    printf("\nPrint Function");
}

int sum()
{
    int a = 6, b = 4;
    int s = a + b;
    return s;
}

int sum1(int a, int b, int c)
{
    int s = a + b + c;
    return s;
}

// Return : Our Function -> Main Function
// Passing: Main Function -> Our Function

int main() {
    printhello();
    int main_sum = sum();
    printf("%d",main_sum);
    main_sum = sum1(1,3,7);
    printf("%d",main_sum);
    return 0;
}
