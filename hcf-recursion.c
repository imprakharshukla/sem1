#include<stdio.h>
//Write a program to calculate the GCD of given numbers using recursion

int hcf(int, int);
int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d%d", &n1, &n2);
    printf("\n");
    printf("GCD of the two numbers is %d", hcf(n1,n2));
}

int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}