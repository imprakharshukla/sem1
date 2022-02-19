#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    int k = 0;
    int buff[1024];
    FILE *file;
    FILE *writingFile;
    if ((file = fopen("int.txt", "r")) == NULL)
    {
        printf("Error opening the file!");
        exit(1);
    }

    while (fscanf(file, " %d", &num) == 1)
    {
        buff[k++] = num;
    }

    if ((file = fopen("square.txt", "w+")) == NULL)
    {
        printf("Error opening the file!");
        exit(1);
    }

    for (int i = 0; i < k; ++i)
    {
        fprintf(file, "%d ", buff[i] * buff[i]);
    }

    fclose(file);
    return 0;
}
