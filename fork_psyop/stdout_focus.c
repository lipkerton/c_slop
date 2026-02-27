#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>

int main() {
    int rc = fork();
    if (rc < 0) {
        fprintf(stderr, "Ошибка создания процесса!");
        exit(1);
    }
    else if (rc == 0) {
        close(STDOUT_FILENO);
        open("./side_kick.output", O_WRONLY|O_CREAT|O_TRUNC, S_IRWXU);

        char *program = "./side_kick";
        execvp(program, NULL);
    }
    else {
        int wc = wait(NULL);
    }
    return 0;
}