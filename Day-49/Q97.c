//Q97.Print the initials of a name.

#include<stdio.h>
#include<ctype.h>

int main(){

    char name[100];
    fgets(name, sizeof(name), stdin);    //input

    if(isalpha(name[0])){                      //prints the first ch if its a letter
        printf("%c",toupper(name[0]));
    }

    for(int i = 1 ; name[i] != '\0' ; i++){       //loop to print initials after every space
        if(name[i] == ' ' && isalpha(name[i+1])){
            printf("%c", toupper(name[i+1]));
        }
    }

    return  0;
}                                //end