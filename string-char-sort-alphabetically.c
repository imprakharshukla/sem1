#include<stdio.h>

//Write program to sort the array of character (String) in alphabetical order
//like STRING in GINRST.


int main() {
    int s;
    printf("Enter the string size \n");
    scanf("%d", &s);
    char str[s];
    scanf("%s", &str);
    char temp;
    for(int i = 0; i < s; ++i){
        for(int j = i+1; j < s; ++j){
            if(str[i] > str[j]){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("%s", str);
}