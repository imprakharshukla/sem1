#include<stdio.h>

void deleteElement(int list[], int, int);
int main() {

    //Write a program to merge two sorted array & no element is repeated during merging.

    int size1, size2;
    printf("Input the size of the two arrays");
    scanf("%d%d", &size1, &size2);

    int arr1[size1], arr2[size2];
    for(int i = 0; i < size1; ++i){
        scanf("%d", &arr1[i]);
    }
    for(int i = 0; i < size2; ++i){
        scanf("%d", &arr2[i]);
    }


    //maxing out the size in the favor of the worst case of 0 intersecting elements
    int mergedArr[size1+size2];
    int k = 0;
    int l = 0;
    int m = 0;
    int s = size1+size2;

    while(k < size1 && l < size2){
        if(arr1[k] < arr2[l]){
            mergedArr[m++] = arr1[k++];
        }else
            mergedArr[m++] = arr2[l++];
    }


    while (k < size1){
        mergedArr[m++] = arr1[k++];
    }
    while (l < size2){
        mergedArr[m++] = arr2[l++];
    }

    //scanning for duplicates
    for(int i = 0; i <s; ++i){
        for(int j = 0; j< s; ++j){
            if(mergedArr[i] == mergedArr[j] && i != j){
                //duplicate found
                deleteElement(mergedArr, i, s);
            }
        }
    }
    printf("\n");
    for(int i = 0; i < s; ++i){
        printf("%d\n", mergedArr[i]);
    }

}

void deleteElement(int list[], int pos, int s){
    for(int i = pos; i < s; ++i){
        list[i] = list[i+1];
    }
}