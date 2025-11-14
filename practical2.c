//Atharva Balpande - 25070521117

#include <stdio.h>
#include <math.h>

int main() {

    int choice;

    do {
        // Menu
        printf("\n--- MENU ---\n");
        printf("1. Check Positive/Negative\n");
        printf("2. Day using Switch\n");
        printf("3. Quadratic Equation\n");
        printf("4. Leap Year Check\n");
        printf("5. Sum & Reverse of Digits\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            // 1. Conditional Check
            case 1: {
                int n;
                printf("Enter number: ");
                scanf("%d", &n);

                if (n > 0)
                    printf("Positive\n");
                else if (n < 0)
                    printf("Negative\n");
                else
                    printf("Zero\n");

                break;
            }

            // 2. Switch Case for Day
            case 2: {
                int day;
                printf("Enter day (1–7): ");
                scanf("%d", &day);

                switch (day) {
                    case 1: printf("Sunday\n"); break;
                    case 2: printf("Monday\n"); break;
                    case 3: printf("Tuesday\n"); break;
                    case 4: printf("Wednesday\n"); break;
                    case 5: printf("Thursday\n"); break;
                    case 6: printf("Friday\n"); break;
                    case 7: printf("Saturday\n"); break;
                    default: printf("Invalid day!\n");
                }

                break;
            }

            // 3. Quadratic Equation
            case 3: {
                double a, b, c, d;
                printf("Enter a b c: ");
                scanf("%lf %lf %lf", &a, &b, &c);

                d = b*b - 4*a*c;

                if (d > 0) {
                    printf("Real Roots: %.2lf , %.2lf\n",
                           (-b + sqrt(d)) / (2*a),
                           (-b - sqrt(d)) / (2*a));
                }
                else if (d == 0) {
                    printf("Equal Roots: %.2lf\n", -b / (2*a));
                }
                else {
                    printf("Complex Roots\n");
                }

                break;
            }

            // 4. Leap Year
            case 4: {
                int year;
                printf("Enter year: ");
                scanf("%d", &year);

                if ((year % 400 == 0) ||
                    (year % 4 == 0 && year % 100 != 0))
                    printf("Leap Year\n");
                else
                    printf("Not a Leap Year\n");

                break;
            }

            // 5. Sum + Reverse
            case 5: {
                int n, sum = 0, rev = 0;
                printf("Enter number: ");
                scanf("%d", &n);

                int temp = n;

                while (n > 0) {
                    int d = n % 10;
                    sum += d;
                    rev = rev * 10 + d;
                    n /= 10;
                }

                printf("Sum = %d\n", sum);
                printf("Reverse = %d\n", rev);

                break;
            }

            case 6:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}

