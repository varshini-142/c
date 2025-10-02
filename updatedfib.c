#include <stdio.h>

int main() {
    int n, first = 0, second = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i) {
        printf("%d ", first);   // Print the current term
        nextTerm = first + second;
        first = second;
        second = nextTerm;
    }

    printf("\n");
    return 0;
}
