//Q86.Check if a string is a palindrome.
#include<stdio.h>
int main(){
    char str[200];
    int i,length = 0,flag=1;

    printf("ENTER A STRING: ");
    gets(str);

    for(i=0;str[i] != '\0'; i++){
        length++;
    }

    for(i=0;i < length / 2; i++){
        if(str[i] != str[length - 1 -i]){
            flag = 0;
            break;
        }
    }
    if(flag==1)
    printf("The string is a palindrome.\n");
    else
    printf("it is not a palindrome");

    return 0;
}