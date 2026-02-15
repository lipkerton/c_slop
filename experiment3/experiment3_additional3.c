#include <stdio.h>


int main() {
    int values[5] = {10, 20, 30, 40, 50};
    int *f = values;
    printf("%p\n", f);
    printf("%p\n", f + 1);
    printf("%d\n", *(f + 1));
    printf("%p\n", values);
    printf("%p\n", values + 1);
    printf("%d\n", *(values + 1));
    printf("%d\n", values[1]);
    return 0;
}