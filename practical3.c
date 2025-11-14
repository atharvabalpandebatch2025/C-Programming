#include <stdio.h>
#include <math.h>

int main() {

    int n, i, j;
    int pos = 0, neg = 0;
    float mean, var = 0, dev;

    // ---- ARRAY INPUT ----
    printf("Enter number of elements: ");
    scanf("%d", &n);

    float a[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%f", &a[i]);

    // ---- MEAN, POS, NEG ----
    float sum = 0;
    for (i = 0; i < n; i++) {
        sum += a[i];
        if (a[i] >= 0)
            pos += a[i];
        else
            neg += a[i];
    }

    mean = sum / n;

    // ---- VARIANCE & STANDARD DEVIATION ----
    for (i = 0; i < n; i++)
        var += pow(a[i] - mean, 2);

    var = var / n;        // variance
    dev = sqrt(var);      // standard deviation

    printf("\nMean = %.2f\n", mean);
    printf("Variance = %.2f\n", var);
    printf("Standard Deviation = %.2f\n", dev);

    printf("Sum of Positive Numbers = %d\n", pos);
    printf("Sum of Negative Numbers = %d\n", neg);

    // ---- MATRIX INPUT ----
    int r, c;
    printf("\nEnter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
    }

    // ---- TRANSPOSE ----
    printf("\nTranspose of Matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++)
            printf("%d ", mat[j][i]);
        printf("\n");
    }

    // ---- LOWER TRIANGULAR ----
    printf("\nLower Triangular Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (i >= j)
                printf("%d ", mat[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}
