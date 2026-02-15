#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a = 1;
    int *p = &a;
    int **c = &p;
    *p = 2;  // меняем значение в ячейке памяти.

    printf(
        "Переменная `a`: %d\n"
        "Переменная `p`: %d\n"
        "Указатель на указатель: %d\n",
        &a, p, c
    );
}