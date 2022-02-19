#include <stdio.h>

void reverse(char a[], int);
void swap(char *, char *);
void print(char a[], int);
int main()
{
    int size;
    printf("Enter size of the array \n");
    scanf("%d", &size);
    char a[size];
    for (int i = 0; i < size; ++i)
    {
        scanf("%c", &a[i]);
    }
    reverse(a, size);
    print(a, size);
}

void reverse(char a[], int size)
{
    char *first_pointer = a;
    char *last_pointer = a + size - 1;
    while (first_pointer < last_pointer)
    {
        swap(first_pointer, last_pointer);
        last_pointer--;
        first_pointer++;
    }
}

void swap(char *a, char *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void print(char a[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%c", a[i]);
    }
}