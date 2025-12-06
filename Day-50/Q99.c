//Q99.Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include<stdio.h>
#include<string.h>

int main(){

    char date[20];
    char day[3];
    char month[3];
    char year[5];
    
    scanf("%s",date);

    strncpy(day , date ,2);
    day[2] = '\0';

    strncpy(month, date + 3,2);
    month[2] = '\0';

    strcpy(year, date + 6);

    if(strcmp(month, "04")==0){
        printf("%s-apr-%s\n",day,year);
    }
    else{
        printf("invalid month\n");
    }

    return 0;
}