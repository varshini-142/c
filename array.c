#include <stdio.h>

int func(int *p, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    func(arr, n);

    return 0;
}