#include <stdio.h>
int main() {
    int n, fact = 1, *p;
    printf("Enter a number: ");
    scanf("%d", &n);
    p = &n;
    while (*p > 0) {
    fact *= *p;
    (*p)--;
    }
    printf("Factorial is: %d\n", fact);
    return 0;
}

