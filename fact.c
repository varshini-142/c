#include <stdio.h>

int main() {
    int number;
    long long factorial = 1; 

    // Handle special cases: factorial of 0 and negative numbers
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (number == 0) {
        printf("Factorial of 0 is 1.\n");
    } else {
        // Calculate factorial using a for loop
        for (int i = 1; i <= number; i++) {
            factorial *= i; // factorial = factorial * i;
        }
        printf("Factorial of %d is %lld\n", number, factorial);
    }

    return 0;
}
