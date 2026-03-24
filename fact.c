#include <stdio.h>

// Function to calculate factorial iteratively
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;

    printf("Enter a non - negative integer: ");
    // Input validation
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter(specify the output) an integer.\n");
        return 1;
    }

    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Factorial grows very fast; warn if number is too large
    if (num > 20) {
        printf("Warning: Factorial of %d may overflow 64-bit storage.\n", num);
    }

    unsigned long long result = factorial(num);
    printf("Factorial of %d = %llu\n", num, result);

    return 0;
}
