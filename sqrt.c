#include <stdio.h>

double squareRoot(double n) {
    double guess = n / 2.0;
    double epsilon = 0.00001; // Accuracy threshold

    while ((guess * guess - n) > epsilon || (n - guess * guess) > epsilon) {
        guess = (guess + n / guess) / 2.0;
    }

    return guess;
}

int main() {
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number < 0) {
        printf("Square root of a negative number is not real.\n");
    } else {
        printf("Square root of %.2f is approximately %.5f\n", number, squareRoot(number));
    }

    return 0;
}

