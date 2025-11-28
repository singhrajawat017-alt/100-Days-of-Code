//Q87.Count spaces, digits, and special characters in a string.
#include <stdio.h>

int main() {
    char str[200];
    int i;
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    gets(str);  // reads full line including spaces

    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if(ch == ' ') {
            spaces++;
        }
        else if(ch >= '0' && ch <= '9') {
            digits++;
        }
        else if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // do nothing, it is alphabet
        }
        else {
            special++;  // anything else is special character
        }
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
