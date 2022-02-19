#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    int k = 0;
    int buff[1024];
    FILE *file;
    if ((file = fopen("int.txt", "r")) == NULL)
    {
        printf("Error opening the file!");
        exit(1);
    }

    for (int i = 1; i < 100; ++i)
    {
        int c = 0;
        for (int j = 1; j < i; ++j)
        {
            if (i % j == 0)
            {
                ++c;
            }
        }
        if (c <= 2)
        {
            buff[k++] = i;
        }
        c = 0;
    }

    if ((file = fopen("prime.txt", "w+")) == NULL)
    {
        printf("Error opening the file!");
        exit(1);
    }

    for (int i = 0; i < k; ++i)
    {
        fprintf(file, "%d ", buff[i]);
    }

    fclose(file);
    return 0;
}
