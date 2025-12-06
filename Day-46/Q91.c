//Q91.Toggle case of each character in a string.
#include<stdio.h>

int main(){
    char str[200], result[200];
    int i, j = 0;
    printf("enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++){
        char ch = str[i];

        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' &&
           ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U') {
            
            result[j] = ch;
            j++;
           }
    }
    result[j] = '\0';

    printf("String after removing vowel: %s\n", result);
    return 0;
}