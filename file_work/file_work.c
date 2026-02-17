#include <unistd.h>
#include <assert.h>
#include <fcntl.h>
#include <sys/stat.h>  // для S_IRWXU - это режим чтения файла чтение/запись/выполнение;

int main(int argc, char *argv[]) {
    int fd = open("/tmp/file", O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU);
    assert(fd > -1);
    int rc = write(fd, "hello_world", 12);
    assert(rc == 12);
    close(fd);
    return 0;
}