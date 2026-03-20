// identifying longest word in a string 

#include <stdio.h>

void LongestWord(char *str) {
    char *start = str;
    char *longest = str;
    int maxLen=0, len=0;

    while (*str) {
        if (*str != ' ' && *str != '\n') {
            if (len == 0) start = str;
            len++;
        } else {
            if (len > maxLen) 
            {
                maxLen = len;
                longest = start;
            }
            len = 0;
        }
        str++;
    }

    if (len > maxLen) 
    {
        maxLen = len;
        longest = start;
    }

    printf("Longest word is: ");
    for (int i=0; i < maxLen; i++) 
    {
        putchar(longest[i]);
    }
    printf("\n");
}

int main() {
    char sentence[] = "Pointers in C are tricky but fun, I like studying programming";
    LongestWord(sentence);
    return 0;
}
