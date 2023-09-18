#include <stdio.h>

int	ft_isalnum(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

