//Q40.Write a program to find the 1’s complement of a binary number and print it
#include <stdio.h>
#include <string.h>
int main() {
    char binary[100];
    printf("Enter a binary number: ");
    scanf("%s", binary);
    printf("1's Complement = ");
    for (int i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0')
            printf("1");
        else if (binary[i] == '1')
            printf("0");
        else {
            printf("\nInvalid input! Enter only 0s and 1s.\n");
            return 1; // exit program if invalid
        }
    }
    printf("\n");
    return 0;
}
