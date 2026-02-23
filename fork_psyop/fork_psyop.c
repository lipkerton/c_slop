#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(int argc, char *arhv[]) {
    printf("Hello world (pid: %d)\n", (int) getpid());
    int rc = fork();
    if (rc < 0) {
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) {
        printf("Hello, I am a child (pid: %d)\n", (int) getpid());
        char *args[2];
        args[0] = strdup("./side_kick");
        args[1] = NULL;
        execvp(args[0], args);
        printf("this shouldn't print out\n");
    } else {
        int wc = wait(NULL);
        printf("Hello, I am parent of %d (wc: %d) (pid: %d)\n", rc, wc, (int) getpid());
    }
    return 0;
}