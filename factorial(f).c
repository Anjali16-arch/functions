#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n < 0) {
        return -1; // Factorial is not defined for negative numbers
    }
    if (n == 0 || n == 1) {
        return 1; // Base case
    }
    
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i; // Multiply each number up to n
    }
    
    return result;
}

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    int result = factorial(number);
    if (result != -1) {
        printf("Factorial of %d is %d\n", number, result);
    } else {
        printf("Factorial is not defined for negative numbers.\n");
    }

    return 0;
}
