#include<stdio.h>
#include<stdlib.h>
//Write a program to find the sum of digits of a 5 digit number using recursion.
int sum(int, int);
int main(int argc, char* argv[] ) {
    int n;
    n=atoi(argv[1]);
    printf("\n");
    printf("The sum of the digits of the number is- %d", sum(n, 0));
}

int sum(int n, int s){

    if(n <= 0){
        return s;
    }
    s += (n%10);
    sum(n/10, s);
}