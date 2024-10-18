#include <stdio.h>

// Function to calculate the GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to check if three numbers are coprime
int areCoprime(int a, int b, int c) {
    return gcd(a, b) == 1 && gcd(b, c) == 1 && gcd(a, c) == 1;
}

// Function to find and display coprime triplets up to a given number
void findCoprimeTriplets(int n) {
    int found = 0; // Flag to check if any coprime triplet is found
    for (int i = 1; i <= n - 2; i++) {
        for (int j = i + 1; j <= n - 1; j++) {
            for (int k = j + 1; k <= n; k++) {
                if (areCoprime(i, j, k)) {
                    printf("Coprime triplet found: %d, %d, %d\n", i, j, k);
                    found = 1;
                }
            }
        }
    }
    if (!found) {
        printf("No coprime triplets found up to %d.\n", n);
    }
}

int main() {
    int number;

    // User input for the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Validate input
    if (number < 3) {
        printf("Please enter a number greater than or equal to 3.\n");
        return 1;
    }

    findCoprimeTriplets(number);

    return 0;
}
