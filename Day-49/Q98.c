//Q98.Print initials of a name with the surname displayed in full.

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){

    char name[100];
    fgets(name, sizeof(name),stdin);

    int n = strlen(name);

    printf("%c. ",toupper(name[0]));   //prints initals of first name

    for(int i = 1 ; i < n ; i++){     //loop to print initals of middle name
        if(name[i] == ' ' && isalpha(name[i+1])){
            int j = i+1;
            while(name[j] != ' ' && name[j] != '\0' && name[j] != '\n'){
                j++;
            }
            if(name[j] != '\0' && name[j] != '\n' ){
                printf("%c." toupper(name[i+1]));
            }
        }
    }

    printf("%s", strrchr(name, ' ')+1);    //prints initals of last name

    return 0;
}                     //end