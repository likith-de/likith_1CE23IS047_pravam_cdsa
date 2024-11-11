#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // If n is divisible by any number other than 1 and itself, it is not prime
        }
    }
    return true; // If no divisor was found, n is prime
}

int main() {
    int N;

    // Read input number
    printf("Enter a number: ");
    scanf("%d", &N);

    // Check if the number is prime and print the result
    if (isPrime(N)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}