// to remove spaces from a string
#include <stdio.h>
void removeSpaces(char *str) {
    char *read=str;
    char *write=str;

    while (*read) {
        if (*read != ' ') {
            *write = *read;
            write++;
        }
        read++;
    }
    *write = '\0';
}
int main() {
    char str[] = "C is a good and powerful language";
    removeSpaces(str);
    printf("%s\n", str);  
    return 0;
}
