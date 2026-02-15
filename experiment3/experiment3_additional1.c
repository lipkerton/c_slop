#include <stdio.h>


int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    printf("Адрес первого элемента: %p\n", ptr);
    printf("Адрес второго элемента: %p\n", ptr + 1);
    printf("Адрес какого-то элемента: %p\n", ptr - 1);
    printf("Какой это элемент последовательности? %d\n", *(ptr - 1));
    return 0;
}