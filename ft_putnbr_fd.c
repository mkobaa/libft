#include <unistd.h>

void	ft_putchar(char c, int fd)
{
	write (fd, &c, 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0)
	{
		nb = -nb;
        ft_putchar('-', 1);
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
		ft_putchar(nb + '0', fd);
}

int main()
{
    ft_putnbr_fd(458, 1);
}