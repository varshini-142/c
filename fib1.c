#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: "); // initailly printing first and second i.e(0,1)
    printf("%d %d ", first,second);
    // Start loop from 3 because first two Fibonacci numbers are already printed
    for (int i = 3; i <= n; i++)
    {
        // Calculate next term by adding previous two terms
        nextTerm = first + second;
        printf("%d ", nextTerm);
        first = second;
        second = nextTerm;
    }
    printf("\n");
    return 0;
}
