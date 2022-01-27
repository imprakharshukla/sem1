#include<stdio.h>
// swap two numbers using call by reference
void refSwap(int *, int *);

int main() {
    int a, b;
    printf("Enter the two numbers");
    scanf("%d%d", &a. &b);
    refSwap(&a, &b);
    printf("a = %d ,b = %d", a, b);

}

void refSwap(int* a, int* b){
    int c = *a;
    *a = *b;
    *b = c;
}
