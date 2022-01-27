#include<stdio.h>


//Write a program to evaluate the addition of diagonal elements of two square matrixes.
int main() {
    int s1, s2;
    printf("Enter the size of the matrix");
    scanf("%d%d", &s1, &s2);

    int a[s1][s1], b[s2][s2];

    for(int i = 0; i < s1; ++i){
        for(int j = 0; j < s1; ++j)
            scanf("%d", &a[i][j]);
    }

    for(int i = 0; i < s2; ++i){
        for(int j = 0; j < s2; ++j)
            scanf("%d", &b[i][j]);
    }


    //calculating the sum of the diagonal
    int sum1 = 0, sum2= 0;

    for(int i = 0; i < s1; ++i){
        for(int j = 0; j < s1; ++j)
            if(i == j){
                sum1 += a[i][j];
            }
    }
    for(int i = 0; i < s2; ++i){
        for(int j = 0; j < s2; ++j)
            if(i == j){
                sum2 += b[i][j];
            }
    }

    printf("\n The sum of the diagonal elements of the two matrix is %d", sum1+sum2);
    return 0;
}