#include<stdio.h>
#include <stdlib.h>

//Write a program to find the transpose of a given matrix & check whether it is symmetric or not.
int main() {

    int r, c;
    printf("Enter the no. of rows \n");
    scanf("%d", &r);
    printf("Enter the no. of cols. \n");
    scanf("%d", &c);

    int **a = (int **) malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++)
        a[i] = (int *) malloc(c * sizeof(int));

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j)
            scanf("%d", &a[i][j]);
    }


    int trans[c][r];

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j)
            trans[j][i] = a[i][j];
    }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }


}