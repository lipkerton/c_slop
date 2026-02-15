#include <stdio.h>


int main() {
    for (int a = 1, b = 10; a < b || b > a; a++, b--) {
        printf("a: %d\tb: %d\n", a, b);
    }
    return 0;
}