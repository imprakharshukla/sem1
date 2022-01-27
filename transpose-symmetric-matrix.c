#include<stdio.h>

//Write a program to find the transpose of a given matrix & check whether it is symmetric or not.
int main() {

    int r,c;
    printf("Enter the no. of rows \n");
    scanf("%d", &r);
    printf("Enter the no. of cols. \n");
    scanf("%d", &c);

    int a[r][c];

    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j)
            scanf("%d", &a[i][j]);
    }


    int trans[c][r];

    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j)
            trans[j][i] = a[i][j];
    }

    if(r == c) {
        int flag = -1;
        for(int i = 0; i < r; ++i){
            for(int j = 0; j < r; ++j)
                if(trans[i][j] != a[i][j]){
                    printf("Matrix is not symmetric");
                    return 0;
                }
        }
        printf("Matrix is symmetric");
    } else {
        printf("Matrix is not symmetric");
    }


}