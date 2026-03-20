// tokenize a string 

#include <stdio.h>

void tokenize(char *text, char separator) {
    char *tokenStart = text;

    while (*text) {
        if (*text == separator) {
            *text = '\0';                
            printf("%s\n", tokenStart);  
            tokenStart=text+1;       
        }
        text++;
    }
    printf("%s\n", tokenStart); 
}
int main() {
    char input[] = "a,b,c,d,e,f,g";
    tokenize(input, ',');
    return 0;
}
