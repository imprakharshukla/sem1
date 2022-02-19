#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    int k = 0;
    int buff[1024];
    FILE *evenFile;
    FILE *oddFile;
    FILE *file;
    if ((file = fopen("num.txt", "r")) == NULL)
    {
        printf("Error opening the file!");
        exit(1);
    }

    while (fscanf(file, " %d", &num) == 1)
    {
        buff[k++] = num;
    }

    if ((evenFile = fopen("even.txt", "w+")) == NULL)
    {
        printf("Error opening the file!");
        exit(1);
    }
    if ((oddFile = fopen("odd.txt", "w+")) == NULL)
    {
        printf("Error opening the file!");
        exit(1);
    }

    for (int i = 0; i < k; ++i)
    {
        if(buff[i] % 2 == 0)
            fprintf(evenFile, "%d ", buff[i]);
        else
            fprintf(oddFile, "%d ", buff[i]);
    }

    fclose(file);
    return 0;
}
