#include<stdio.h>
//Write a program to print the multiplication of two N*N (Square) matrix.

int main() {
    int s;
    printf("Enter the size of the matrix");
    scanf("%d", &s);

    int a[s][s], b[s][s];

    for(int i = 0; i < s; ++i){
        for(int j = 0; j < s; ++j)
            scanf("%d", &a[i][j]);
    }

    for(int i = 0; i < s; ++i){
        for(int j = 0; j < s; ++j)
            scanf("%d", &b[i][j]);
    }


    int product[s][s];

    for (int i = 0; i < s; ++i) {
        for (int j = 0; j < s; ++j) {
            product[i][j] = 0;
        }
    }

    for(int i = 0; i < s; ++i){
        for(int j = 0; j < s; ++j){
            for(int k = 0; k < s; ++k)
                product[i][j] += (a[i][k] * b[k][j]);
        }
    }

    printf("\n");
    for(int i = 0; i < s; ++i){
        for(int j = 0; j < s; ++j)
            printf("%d ", product[i][j]);
        printf("\n");
    }
}