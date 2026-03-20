// to check if a string is a palindrome

#include <stdio.h>

int main() {
    char str[] = "naman";
    char *start = str;
    char *end = str;
    while (*end != '\0') {
        end++;
    }
    end--;  

    int isPalindrome = 1;
    while (start < end) {
        if (*start != *end) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else 
    {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
