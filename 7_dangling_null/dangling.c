#include <stdio.h>

int *function() {
    int value = 30;
    return &value; // returning address of local variable
}

int main() {
    int *ptr = function(); // ptr is now a dangling pointer
    printf("%d", *ptr); // undefined behavior, as ptr points to a non-existent stack frame
    return 0;
}
