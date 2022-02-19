#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[] ) {
    int num;
    num = atoi(argv[1]);
    int fac = 1;
    for(int i = 1; i <= num; ++i){
        fac *= i;
    }
    printf("The factorial is %d", fac);
}