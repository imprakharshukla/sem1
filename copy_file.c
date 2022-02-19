#include<stdio.h>
#include <stdlib.h>

int main() {
    int num;
    char buff[1024];
    FILE *file;
    FILE *writingFile;
    if((file = fopen("a.txt", "r")) == NULL){
        printf("Error opening the file!");
        exit(1);
    }
    fgets(buff, 1024, file);
    printf("%s", buff);

    if((file = fopen("b.txt", "w")) == NULL){
        printf("Error opening the file!");
        exit(1);
    }
    fprintf(file, "%s", buff);

    fclose(file);
    return 0;
}