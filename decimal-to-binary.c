#include<stdio.h>

// Write a program to convert decimal number in to binary number.
long long convert(int);

int main() {
    int num;
    printf("Enter the decimal number \n");
    scanf("%d", &num);
    printf("The binary equivalent is - %d", convert(num));

}

long long convert(int n) {
    long long bin = 0;
    int rem, i = 1;

    while (n!=0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }

    return bin;
}