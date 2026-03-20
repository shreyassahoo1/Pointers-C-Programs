// Concatenate two strings using pointers

#include <stdio.h>

int main() {
    char first[] = "RV";
    char second[] = "CE";
    char combined[100];  
    char *src;
    char *dest = combined;

    src = first;
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    src = second;
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  
    printf("Concatenated string is: %s\n", combined);
    return 0;
}
