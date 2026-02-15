#include <stdio.h>
#include <stdlib.h>

const float EULER = 2.71828f;
const int COUNT = 10;

float* create_exp() {
    float* dest = malloc(COUNT * sizeof(float));
    dest[0] = 1.0f;
    for (int i = 1; i < COUNT; i++) {
        dest[i] = dest[i - 1] * EULER;
    }
    return dest;
}

void print_floats(float* vals, int n) {
    for (int i = 1; i < n; i++) {
        printf("%f\n", vals[i]);
    }
}

int main() {
    float* values = create_exp();
    print_floats(values, COUNT);
    free(values);
    return 0;
}