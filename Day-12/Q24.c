//Q24. Write a program to calculate an electricity bill based on units consumed.
#include <stdio.h>
int main(){
    int units,bill;
    bill = 0;
    printf("enter units :");
    scanf("%d",&units);
    if(units <= 100){
        bill = units * 5;
    }else if(units<= 200){
        bill = (100 *5) + ((units - 100) * 7);
    }else{
        bill = (100 * 5) + (100 * 7) +((units -200) * 10 );
    }
    printf("bill : %d\n",bill);
    return 0;
}