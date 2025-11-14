//Atharva Balpande - 25070521117

#include <stdio.h>
#include <string.h>

int main() {

    char s1[50], s2[50];

    // ---- INPUT ----
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    // Remove newline (fgets stores '\n')
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    // ---- CONCATENATION ----
    printf("\nConcatenation: %s\n", strcat(s1, s2));

    // ---- COPY EXAMPLE ----
    char a[50], b[50];
    strcpy(a, "Hello");
    strcpy(b, "World");

    printf("Copy Example: %s\n", strcpy(a, b));

    // ---- COMPARE ----
    printf("Compare (apple vs banana): %d\n", strcmp("apple", "banana"));

    return 0;
}

