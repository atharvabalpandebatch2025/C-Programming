//Atharva Balpande - 25070521117

#include <stdio.h>

// ---- FACTORIAL (RECURSION) ----
int fact(int n) {
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

// ---- FIBONACCI (RECURSION) ----
int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {

    int n, i;

    printf("Enter number: ");
    scanf("%d", &n);

    // ---- FACTORIAL OUTPUT ----
    printf("Factorial = %d\n", fact(n));

    // ---- FIBONACCI SERIES ----
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++)
        printf("%d ", fib(i));

    return 0;
}

