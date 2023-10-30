

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main() {
//     char c = 'A';
//     int fd = 1;

//     ft_putchar_fd(c, fd);

//     return 0;
// }
// int fd = 0; - Standard input (STDIN): This file descriptor is associated with the keyboard or other input source.

// int fd = 1; - Standard output (STDOUT): This file descriptor is associated with the screen or other output device.

// int fd = 2; - Standard Error Output (STDERR): This file descriptor is used to output error messages and is also usually associated with the screen.

// int fd = open("file.txt", O_WRONLY); - Open a file for writing: This file descriptor will be associated with the specified file.txt and will allow data to be written to that file.

// int fd = socket(AF_INET, SOCK_STREAM, 0); - Create a socket: This file descriptor is used to establish a network connection.

// int fd = open("/dev/null", O_WRONLY); - Open device /dev/null: This is a special device that can be used to ignore output.

// int fd = dup(another_fd); - Duplicate file descriptor: You can create an additional copy of another file descriptor for many purposes.