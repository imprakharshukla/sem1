#include<stdio.h>
#include<math.h>
#include<string.h>

//Write a program to store the following string “zero”, “one” -------“five”. Print the no in words, given in figure as 3205.
int getNumber(char string[]);
int main() {
    int s;
    printf("Enter the number of words");
    scanf("%d", &s);
    char inWord[s][10];
    for(int i = 0; i < s; ++i){
        scanf("%s[^\n]", inWord[i]);
    }
    int ans = 0;
    printf("\n");
    int k = s-1;
    for(int i=0;i<s;i++){
        int corrNumber = getNumber(inWord[i]);
        ans += corrNumber * pow(10,k--);
    }
    printf("\n");
    printf("The number is %d", ans);

}


int getNumber(char op[]){
    if(strcmp(op, "zero") == 0)
        return 0;
    else if(strcmp(op, "one") == 0)
        return 1;
    else if(strcmp(op, "two") == 0)
        return 2;
    else if(strcmp(op, "three") == 0)
        return 3;
    else if(strcmp(op, "four") == 0)
        return 4;
    else if(strcmp(op, "five") == 0)
        return 5;
    else if(strcmp(op, "six") == 0)
        return 6;
    else if(strcmp(op, "seven") == 0)
        return 7;
    else if(strcmp(op, "eight") == 0)
        return 8;
    else if(strcmp(op, "nine") == 0)
        return 9;
    else
        return 0;


}
