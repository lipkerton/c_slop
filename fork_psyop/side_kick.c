#include <stdio.h>
#include <unistd.h>

int main() {
    fprintf(stdout, "Привет, я другая программа (pid: %d)\n", getpid());
    return 0;
}