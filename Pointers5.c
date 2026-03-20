// to find the frequency of a particular character in a string 

#include <stdio.h>

int main() {
    char str[] = "ferrari";    
    char ch = 'r';             
    char *ptr = str;           
    int count = 0;

    while (*ptr != '\0') {
        if (*ptr == ch) {
            count++;           
        }
        ptr++;                
    }
    printf(" The character '%c' occurs %d times in the string. \n", ch, count);
    return 0;
}
