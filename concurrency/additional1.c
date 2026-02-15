#include <stdio.h>
#include <pthread.h>


int main() {
    int a = 0;
    printf("%d\n", a);
    a |= 1;
    printf("%d\n", a);
    a |= 3;
    printf("%d\n", a);
    pthread_t p1, p2;
    printf("%c\n", p1);
    printf("%c\n", p2);    
    return 0;
}