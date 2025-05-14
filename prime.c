#include <stdio.h>

int main() {
    int limit, i, j;
    int isPrime;

    // Ask the user for the upper limit
    printf("Enter the upper limit to find prime numbers: ");
    scanf("%d", &limit);
    
    printf("Prime numbers up to %d are:\n", limit);

    // Iterate through each number from 2 to the limit
    for (i = 2; i <= limit; i++) {
        isPrime = 1; // Assume i is prime

        // Check if i is divisible by any number from 2 to i-1
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // i is not prime
                break;
            }
        }

        // If i is prime, print it
        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}