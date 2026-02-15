#include <stdio.h>


const float EULER = 2.71828f;
const int COUNT = 10;


void fill_exp(float* dest) {
    dest[0] = 1.0f;
    for (int i = 1; i < COUNT; i++) {
        dest[i] = dest[i - 1] * EULER;
    }
}

void print_floats(float* vals, int n) {
    for (int i = 1; i < n; i++) {
        printf("%f\n", vals[i]);
    }
}

int main() {
    float values[COUNT];
    fill_exp(values);
    print_floats(values, COUNT);
    return 0;
}