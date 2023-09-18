#include <stdio.h>

int	ft_isprint(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] < 32 && str[i] != '\n' && str[i] != '\t') || str[i] == 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
