#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}


void ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		ft_putchar(s[i]);
		i++;
	}
}
