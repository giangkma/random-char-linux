#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main()
{
    int fd, _ret_num_from_mudule;
    fd = open("/dev/randomchar", O_RDONLY);
    if (fd < 0)
    {
        perror("failed to open module");
        return EXIT_FAILURE;
    }
    read(fd, &_ret_num_from_mudule, sizeof(_ret_num_from_mudule));
    printf("return from random-char is : %d \n", _ret_num_from_mudule);
    return EXIT_SUCCESS;
}
