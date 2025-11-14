#include <stdio.h>

int main() {

    int a, b;

    // Taking input from user
    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    // Arithmetic Operators
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);

    // Relational Operator
    printf("a > b = %d\n", a > b);

    // Logical Operator
    printf("Logical AND (a>0 && b>0) = %d\n", (a > 0) && (b > 0));

    // Ternary Operator
    int bigger = (a > b) ? a : b;
    printf("Bigger number = %d\n", bigger);

    return 0;
}
