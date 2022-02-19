#include<stdio.h>
#include <limits.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Enter the size of the array \n");
    scanf("%d", &size);

    int* data;

    data = (int*)calloc(size, sizeof(int));
    if(data == NULL){
        printf("Data not allocated!!");
        exit(0);
    }
    for(int i = 0; i < size; ++i){
        scanf("%d", &data[i]);
    }
    int max = INT_MIN;
    for(int i = 0; i < size; ++i){
        if(data[i] >  max){
            max = data[i];
        }
    }
    printf("The largest element is %d", max);
}