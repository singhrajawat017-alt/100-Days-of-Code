//Q93.Check if two strings are anagrams of each other.

#include<stdio.h>
#include<string.h>

int main(){

    char s1[100];
    char s2[100];
    int freq[26] = {0};

    scanf("%s",s1);   // taking input 
    scanf("%s",s2);   // taking input

    if(strlen(s1) != strlen(s2)){     //checks for length of the strings
        printf("not anagram\n");
        return 0;
    }

    for (int i = 0 ; i <26 ; i++){   //checks the frequency 
        if(freq[i] != 0){
            printf("not anagram\n");
            return 0;
        }
    }

    printf("anagram\n");
    return 0;
}                       //end