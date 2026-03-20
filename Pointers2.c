// To count number of vowels in a string
#include <stdio.h>

int main() {
    char str[] = "Today is a weekend";
    char *ptr = str;
    int count = 0;

    while (*ptr != '\0') {
        if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' ||
            *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u') {
            count++;
        }
        ptr++;
    }
    printf("Number of vowels are = %d\n", count);
    return 0;
}
