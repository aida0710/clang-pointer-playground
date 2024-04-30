#include <stdio.h>

void increment(int *num) {
    (*num)++;
}

int main() {
    int value = 10;
    int *ptr = &value;

    fprintf(stderr, "ptr = %p\n", (void *)ptr);

    printf("Before increment: value = %d\n", value);
    increment(ptr);
    printf("After increment: value = %d\n", value);

    return 0;
}