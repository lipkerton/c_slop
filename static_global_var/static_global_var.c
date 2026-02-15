#include <stdio.h>

// global vars (initialized data segment)
int globalVar = 10;
char message[] = "Hello!";
// global vars (uninitialized data segment)
int unGlobalVar;

int main() {

    // static var (initialized data segment)
    static int staticVar = 11;
    // static var (uninitialized data segment)
    static int unStaticVar;

    unGlobalVar = 12;
    unStaticVar = 13;

    printf("Global variable: %d\n", globalVar);
    printf("Static variable: %d\n", staticVar);
    printf("Message: %s\n", message);

    return 0;
}