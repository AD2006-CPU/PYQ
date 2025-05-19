#include <stdio.h>

int main() {
    int a, b, *p1, *p2;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    
    int max = (*p1 > *p2) ? *p1 : *p2;
    printf("Largest: %d\n", max);
    return 0;
}

