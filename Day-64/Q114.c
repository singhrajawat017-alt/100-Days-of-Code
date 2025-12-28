/*
Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int last[256];
    for (int i = 0; i < 256; i++) {
        last[i] = -1;
    }

    int maxLen = 0, start = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = s[i];

        if (last[ch] >= start) {
            start = last[ch] + 1;
        }

        last[ch] = i;

        int currLen = i - start + 1;
        if (currLen > maxLen) {
            maxLen = currLen;
        }
    }

    printf("%d\n", maxLen);
    return 0;
}
