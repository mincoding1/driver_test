#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("/dev/nobrand", O_RDWR);
    if (fd < 0) printf("ERROR\n");
  
    printf("GO\n");
  
    close(fd);
    
    return 0;
}
