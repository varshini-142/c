#include <stdio.h>
#include <math.h> // Required for sqrt() function

void primeFactors(int n) {
    printf("Prime factors of %d are: ", n);
    }

    // Handle odd factors from 3 up to sqrt(n)
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    // If n is still greater than 2, it means the remaining n is a prime factor
    if (n > 2) {
        printf("%d ", n);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        primeFactors(num);
    }

    return 0;
}
