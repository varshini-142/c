#include<stdio.h>
int main() {
    int n, i, sum = 0;
    float avg = 0.0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];  // Variable length array (C99 feature)

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        sum += a[i];  // Add elements to sum
    }

    avg = (float)sum / n;  // Typecast to float for correct division

    printf("Sum of array is: %d\n", sum);
    printf("Average of array is: %.2f\n", avg);

    return 0;
}
