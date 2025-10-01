#include <stdio.h>
#include <string.h> 

void reverseString(char *str) {
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;
    char temp;

    while (start < end) {
        temp = *start;
        start++;
        end--;
    }
}

int main() {
    char myString[] = "Hello World";

    printf("Original string: %s\n", myString);

    reverseString(myString);

    printf("Reversed string: %s\n", myString);

    return 0;
}
