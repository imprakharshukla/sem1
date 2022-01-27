#include<stdio.h>
// swap variables with call by value

void valSwap(int, int);

int main() {

    int a, b;
    printf("Enter the two numbers");
    scanf("%d%d", &a. &b);
    valSwap(a,b);
    printf("a = %d ,b = %d", a, b);

}

void valSwap(int a, int b){
    int c;
    c = a;
    a = b;
    b = c;
    printf("a = %d ,b = %d", a, b);
}