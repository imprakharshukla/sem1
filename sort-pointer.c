#include <stdio.h>

void reverse(int a[], int);
void swap(int *, int *);
void print(int a[], int);
int main()
{
    int size;
    printf("Enter size of the array \n");
    scanf("%d", &size);
    int a[size];
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &a[i]);
    }
    reverse(a, size);
    print(a, size);
}

void reverse(int a[], int size)
{
    int *first_pointer = a;
    int *last_pointer = a + size - 1;
    while (first_pointer < last_pointer)
    {
        swap(first_pointer, last_pointer);
        last_pointer--;
        first_pointer++;
    }
}

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void print(int a[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", a[i]);
    }
}