#include <stddef.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	unsigned int	i;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
	return (s);
}
