//Q100.Print all sub-strings of a string.

#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    scanf("%s",s);    //taking input from user

    int n = strlen(s);

    for(int i = 0 ; i < n ; i++){          //start index
        for(int  j = i ; j < n ; j++){      //end index
            for(int k = i ; k <= j ; k++){
                printf("%c",s[k]);
            }
            printf("\n")
        }
    }

    return 0;
}                        //end