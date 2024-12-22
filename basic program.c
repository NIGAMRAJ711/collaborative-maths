#include <stdio.h>

int main() {
    float a, b, c, x;

    printf("Enter coefficients a, b, and c for the equation ax^2 + bx + c = 0:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Error: a cannot be zero.\n");
    } else {
        x = -b / (2 * a);
        printf("The solution is x = %.2f\n", x);
    }

    return 0;
}
