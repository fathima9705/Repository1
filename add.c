#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;

    // Prompt user for input
    printf("Enter two integers separated by space: ");

    // Validate input
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input. Please enter integers only.\n");
        return 1; // Exit with error code
    }

    // Calculate 
    int sum = num1 + num2;

    // Display result
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    return 0; // Successful execution
}
