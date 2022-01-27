#include<stdio.h>
// factorial using recursion

int fac(int n);

int main() {
    int num;
    printf("Enter the number to calculate factorial");
    scanf("%d", &num);

    printf("The factorial is - %d", fac(num));
}

int fac(int n){
    if(n == 0){
        return 1;
    }
    return n * fac(n-1);
}