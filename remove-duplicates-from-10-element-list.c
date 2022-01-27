#include<stdio.h>

//Write a program to delete duplicate element in a list of 10 elements & display it on screen.

void deleteElement(int list[], int);

int main() {
    int list[10];
    printf("Enter the desired numbers in the list");
    for(int i = 0; i < 10; ++i){
        scanf("%d", &list[i]);
    }

    //scanning for duplicates
    for(int i = 0; i < 10; ++i){
        for(int j = 0; j< 10; ++j){
            if(list[i] == list[j] && i != j){
                //duplicate found
                deleteElement(list, i);
            }
        }
    }
    printf("\n");
    for(int i = 0; i < 10; ++i){
        printf("%d\n", list[i]);
    }

}

void deleteElement(int list[], int pos){
    for(int i = pos; i < 10; ++i){
        list[i] = list[i+1];
    }
}