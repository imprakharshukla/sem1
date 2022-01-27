#include<stdio.h>
#include<string.h>
//Write a program to remove all the blank space from the string & print it, also count the no of characters.
int main() {
    int n;
    printf("Enter the number of words");
    scanf("%d", &n);
    char str[n][50];
    for(int i=0; i<n; ++i){
        scanf("%s[^\n]", str[i]);
    }
    int count = 0;
    for(int i = 0; i < n; ++i){
        count += strlen(str[i]);
        for(int j = 0; j < strlen(str[i]); ++j){
            if(str[i][j] == ' ') {
                --i;
                for(int k = j+1; k < n; ++k){
                    str[i][k] = str[i][k+1];
                }
            }
        }
    }
    printf("\n");
    printf("The string contains %d characters", count);
    printf("\n");
    for(int i =0; i<n; ++i){
        printf("%s", str[i]);
    }
}