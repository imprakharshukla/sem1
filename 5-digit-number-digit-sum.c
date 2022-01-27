#include<stdio.h>
//Write a program to find the sum of digits of a 5 digit number using recursion.
int sum(int, int);
int main() {
    int n;
    printf("Enter the five digit number");
    scanf("%d", &n);
    printf("\n");
    printf("The sum of the digits of the number is - %d", sum(n, 0));
}

int sum(int n, int s){

    if(n <= 0){
        return s;
    }
    s += (n%10);
    sum(n/10, s);
}