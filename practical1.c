#include <stdio.h>

int main() {
    int a = 10, b = 5;

    // Arithmetic operators
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);

    // Relational operator example
    printf("Is a greater than b? %d\n", a > b);

    // Logical operator example
    printf("Logical AND (1 && 0): %d\n", 1 && 0);

    // Ternary operator
    int big = (a > b) ? a : b;
    printf("Bigger number is %d\n", big);

    return 0;
}
