#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Привет, я другая программа (pid: %d)\n", getpid());
    return 0;
}