#include<stdio.h>
#include<math.h>

// Write a program to convert binary number in to decimal number.
int convert(long long);

int main() {
    long long num;
    printf("Enter the binary number \n");
    scanf("%lld", &num);
    printf("The decimal equivalent is - %d", convert(num));

}

int convert(long long n) {
    int dec = 0, i = 0, rem;

    while (n!=0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }

    return dec;
}