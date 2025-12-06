
//Q94.Find the longest word in a sentence.

#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    char longest[100] = "";
    char word[100];

    int i = 0 , j = 0;
    
    fgets(str, sizeof(str), stdin);

    while(1){
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\0'){   //loop to check all the conditions
            word[j] = '\0';
            if(strlen(word) > strlen(longest)){
                strcmp(longest, word);
            }
            j = 0;
            if(str[i] == '\0'){
                break;
            }
            else{
                word[j++] = str[i];
            }
        }
        i++;
    }

    printf("longest word is: %s\n",longest);   //output

    return 0;
}    //end
