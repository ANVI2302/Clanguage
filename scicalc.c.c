#include <stdio.h>
#include <math.h>




int main() {
    int n, n1, choice;
    float add, sub, multi, divi;
    float sine, cosine, tane, rad, deg, power, sqroot, croot, loge, angle;

    while (1) {
        printf("\n========== SCIENTIFIC CALCULATOR ==========\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Sine\n");
        printf("6. Cosine\n");
        printf("7. Tangent\n");
        printf("8. Radian Conversion (Degree → Radian)\n");
        printf("9. Degree Conversion (Radian → Degree)\n");
        printf("10. Power (n^n1)\n");
        printf("11. Square Root \n");
        printf("12. Cube Root \n");
        printf("13. Log (Base e)\n");
        printf("0. Exit\n");
        printf("-------------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting... Thank you!\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &n, &n1);
                add = n + n1;
                printf("Addition = %.2f\n", add);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &n, &n1);
                sub = n - n1;
                printf("Subtraction = %.2f\n", sub);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &n, &n1);
                multi = n * n1;
                printf("Multiplication = %.2f\n", multi);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%d %d", &n, &n1);
                if (n1 != 0) {
                    divi = (float)n / n1;
                    printf("Division = %.2f\n", divi);
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;

            case 5:
                printf("Enter angle in degrees: ");
                scanf("%f", &angle);
                sine = sin(angle * M_PI / 180);
                printf("Sine(%.2f) = %.4f\n", angle, sine);
                break;

            case 6:
                printf("Enter angle in degrees: ");
                scanf("%f", &angle);
                cosine = cos(angle * M_PI / 180);
                printf("Cosine(%.2f) = %.4f\n", angle, cosine);
                break;

            case 7:
                printf("Enter angle in degrees: ");
                scanf("%f", &angle);
                tane = tan(angle * M_PI / 180);
                printf("Tangent(%.2f) = %.4f\n", angle, tane);
                break;

            case 8:
                printf("Enter angle in degrees: ");
                scanf("%f", &angle);
                rad = angle * (M_PI / 180);
                printf("Radian = %.4f\n", rad);
                break;

            case 9:
                printf("Enter angle in radians: ");
                scanf("%f", &angle);
                deg = angle * (180 / M_PI);
                printf("Degree = %.4f\n", deg);
                break;

            case 10:
                printf("Enter base and exponent: ");
                scanf("%d %d", &n, &n1);
                power = pow(n, n1);
                printf("Power = %.4f\n", power);
                break;

            case 11:
                printf("Enter number: ");
                scanf("%d", &n);
                sqroot = sqrt(n);
                printf("Square Root = %.4f\n", sqroot);
                break;

            case 12:
                printf("Enter number: ");
                scanf("%d", &n);
                croot = cbrt(n);
                printf("Cube Root = %.4f\n", croot);
                break;

            case 13:
                printf("Enter number: ");
                scanf("%d", &n);
                if (n <= 0)
                    printf("Error! Log undefined for non-positive numbers.\n");
                else {
                    loge = log(n);
                    printf("Natural Log (ln) = %.4f\n", loge);
                }
                break;

            default:
                printf("Invalid choice! Please enter between 0-13.\n");
        }
    }

    return 0;
}
