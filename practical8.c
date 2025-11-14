#include <stdio.h>

// Structure to store distance
struct Distance {
    int feet;
    float inch;
};

int main() {

    struct Distance d1, d2, sum;

    // ---- DISTANCE INPUT ----
    printf("Enter 1st distance (feet inch): ");
    scanf("%d %f", &d1.feet, &d1.inch);

    printf("Enter 2nd distance (feet inch): ");
    scanf("%d %f", &d2.feet, &d2.inch);

    // ---- ADDING DISTANCES ----
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    if (sum.inch >= 12) {
        sum.inch -= 12;
        sum.feet++;
    }

    printf("\nSum of Distances = %d' - %.1f\"\n", sum.feet, sum.inch);

    // ---- CGPA CALCULATION ----
    int n, i;
    float cgpa, total = 0;

    printf("\nEnter number of subjects: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter CGPA of subject %d: ", i + 1);
        scanf("%f", &cgpa);
        total += cgpa;
    }

    printf("Overall CGPA = %.2f\n", total / n);

    return 0;
}
