#include <stdio.h>

int add(int a, int b) {
    return (a + b);
}

int sub(int a, int b) {
    return (a - b);
}

int multiply(int a, int b) {
    return (a * b);
}

int division(int a, int b) {
    if (b != 0)
        return (a / b);
    else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int main() {
    int ch, a, b;
    scanf("%d %d", &a, &b);

    printf("1. addition\n2. subtraction\n3. multiplication\n4. division\n");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            printf("%d", add(a, b));
            break;
        case 2:
            printf("%d", sub(a, b));
            break;
        case 3:
            printf("%d", multiply(a, b));
            break;
        case 4:
            printf("%d", division(a, b));
            break;
        default:
            printf("invalid");
    }

    return 0;
}
