//Atharva Balpande - 25070521117
#include <stdio.h>
#include <string.h>
#include <math.h>

// Simple function to sort strings by length
void sortStrings(char words[][50], int n) {

    char temp[50];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            // If first string is longer, swap
            if (strlen(words[i]) > strlen(words[j])) {

                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
}

int main() {

    int n;
    printf("How many strings? ");
    scanf("%d", &n);

    char words[n][50];

    // Input strings
    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", words[i]);
    }

    // Sort function call
    sortStrings(words, n);

    // Print sorted strings
    printf("\nStrings sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    // POINTER + AREA EXAMPLE
    float r;      
    float *p = &r; // Pointer storing address of r

    printf("\nEnter radius: ");
    scanf("%f", &r);

    printf("Area = %.2f\n", M_PI * (*p) * (*p));
    printf("Circumference = %.2f\n", 2 * M_PI * (*p));

    return 0;
}

