#include <stdio.h>

void printWords(const char *str) {
    while (*str != '\0') {
        if (*str == ' ') {
            putchar('\n');
        } else {
            putchar(*str);
        }
        str++;
    }
    putchar('\n');
}
int main() {
    char input[] = "Welcome to London";
    printf("String is: %s\n", input);
    printf("Output: \n");
    printWords(input);
    return 0;
}
