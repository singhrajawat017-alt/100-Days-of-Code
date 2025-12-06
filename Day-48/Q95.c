//Q95.Check if one string is a rotation of another.

#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    char t[100];
    char temp[100];

    scanf("%s",s);  // taking input
    scanf("%s",t);  // taking input

    if(strlen(s) != strlen(t)){      //cheaking if the length is equal
        printf("not rotational\n");
        return 0;
    }
    strcpy(temp,s);
    strcat(temp,s);  //this created s+s

    if(strstr(temp,t) != NULL){   //checks if t is inside temp
        printf("rotation\n");
    }
    else{
        printf("not rotational");
    }

    return 0;
}                                //end