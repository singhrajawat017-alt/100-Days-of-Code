//Toggle case of each character in a string.

#include<stdio.h>
int main(){

    char str[50];

    printf("enter the string: ");      //string input from user
    gets(str);

    for(int i = 0 ; str[i] != '\0' ; i++){    //loop so we can check if the charracter is upper case or lower case
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;                //changes the upper char ASCII value to lower case ASCII value
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){  
            str[i] = str[i] - 32;                //changes the lower char ASCII value to upper case ASCII value
        }
        }
    

    printf("output: %s",str);          //output

    return 0;
}                      //end