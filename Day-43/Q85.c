//Q85.Reverse a string.
#include <stdio.h>

int main(){
    char str[200], rev[200];
    int i,length =0;

    printf("Enter a string");
    gets(str);
// to find length
    for(i=0; str[i] != '\0'; i++){
        length++;
    }
// rev string 
    for(i = 0; i< length; i++){
        rev[i] = str[length -1 -i];
    }
    rev[length] = '\0';
    printf("Rev string: %s\n",rev);

    return 0;


}