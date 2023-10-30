#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return;
	}

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}

	if (n / 10)
		ft_putnbr_fd(n / 10, fd);

	ft_putchar_fd((n % 10) + '0', fd);
}

// int main()
// {
//     int number = -12345;
//     int fd = 1;

//     ft_putnbr_fd(number, fd);

//     return 0;
// }