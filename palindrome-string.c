#include<stdio.h>
#include<string.h>
//Write a program in C to check whether the given string is a palindrome or not

int main() {
    int s;
    printf("Enter the string size \n");
    scanf("%d", &s);
    char str[s];
    scanf("%s", &str);

    char rev[s];
    int k = 0;
    for(int i = s-1; i >= 0; --i){
        rev[i] = str[k++];
    }

    if(strcmp(str,rev) == 0){
        printf("String is palindrome");
    }else{
        printf("String is not palindrome");
    }
}