#include <stdio.h>
int main() {
    char str1[] = "aabbcc";
    char str2[] = "abcdef";
    int i = 0, flag = 0;
    printf("String1: %s\n", str1);
    printf("String2: %s\n", str2);

    while(str1[i] != '\0' || str2[i] != '\0') {
    if(str1[i] != str2[i]) {
    flag = 1;
    break;
    }
    i++;
    }
    if(flag == 0)
    printf("Strings are equal.\n");
    else
    printf("Strings are not equal.\n");

    return 0;
}

