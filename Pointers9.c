// to replace one char with another in a string

#include <stdio.h>

void replaceChar(char *text, char oldChar, char newChar) {
    while (*text) {
        if (*text == oldChar) {
            *text = newChar;
        }
        text++;
    }
}
int main() {
    char word[] = "banana";
    char find = 'a';
    char replace = 'e';

    replaceChar(word, find, replace);
    printf("Output after replacing is: %s\n", word);  
    return 0;
}
