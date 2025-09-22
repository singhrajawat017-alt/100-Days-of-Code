//Q37.Write a program to find the LCM of two numbers.
#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int a, b, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    lcm = (a * b) / gcd(a, b);
    printf("LCM = %d\n", lcm);
    return 0;
}
