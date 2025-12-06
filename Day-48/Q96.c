//Q96.Reverse each word in a sentence without changing the word order.

#include<stdio.h>
#include<string.h>

void reverse(char *s,int start, int end){   //function to reverse the string
    while(start < end){
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}

int main(){

    char str[100];
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);
    int start = 0;

    for(int i = 0 ; i <= n; i++){                              //word boundary
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n'){
            reverse(str,start, i-1);
            start = i+1;
        }
    }

    printf("%s",str);
    return 0;
}