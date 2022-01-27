#include<stdio.h>
// fib series

void printFib(int);

int main() {
    int num;
    printf("Enter the number of terms required!");
    scanf("%d", &num);
    printf("\n The fib series is-");
    printf("\n");
    printf("0 1 ");
    printFib(num-2);
    return 0;
}


void printFib(int n){
    static int a=0, b=1, c;
    if(n > 0){
        c = a+b;
        a = b;
        b = c;
        printf("%d ", c);
        printFib(n-1);
    }
}