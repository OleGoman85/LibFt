#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char newline;

	if (*s)
	{
		newline = '\n';
		while (*s != 0)
		{
			write(fd, s, 1);
			s++;
		}
		write(fd, &newline, 1);
	}
}

// void ft_putendl_fd(char *s, int fd);

// int main() {
//     char *message = "Hello";
//     int fd = 1;

//     ft_putendl_fd(message, fd);

//     return 0;
// }