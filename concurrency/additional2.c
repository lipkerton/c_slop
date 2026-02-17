#include <stdio.h>


int main() {
    int a = 1;
    a = (float) a;
    float b = a;
    printf("%d\t%f\n", a, b);
    return 0;
}