#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

void Spin(int seconds) {
    struct timeval start, now;
    gettimeofday(&start, NULL);
    while (1) {
        gettimeofday(&now, NULL);
        if (now.tv_sec - start.tv_sec >= seconds)
            break;
    }
}