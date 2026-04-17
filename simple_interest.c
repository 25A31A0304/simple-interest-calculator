#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    // Taking input from user
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculating Simple Interest
    simple_interest = (principal * rate * time) / 100;

    // Display result
    printf("\nSimple Interest = %.2f\n", simple_interest);

    return 0;
}
