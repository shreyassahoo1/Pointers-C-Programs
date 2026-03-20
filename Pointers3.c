// To convert string to uppercase

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "rvce ise 28";
    char *ptr = str; 
    while (*ptr != '\0') {
        *ptr = toupper(*ptr);  
        ptr++;                 
    }

    printf("Uppercase string: %s\n", str);
    return 0;
}
