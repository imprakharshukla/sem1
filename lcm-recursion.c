#include<stdio.h>
//find the LCM of the two number using recursion
int lcm(int, int);
int main() {

    int a,b;
    printf("Enter the two numbers");
    scanf("%d%d", &a, &b);

    printf("The LCM of the two numbers is- %d", lcm(a,b));
}

int lcm(int a, int b){
    static int common = 1;

    if (common % a == 0 && common % b == 0)
    {
        return common;
    }
    common++;
    lcm(a, b);
    return common;
}