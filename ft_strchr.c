/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkobaa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:09:10 by mkobaa            #+#    #+#             */
/*   Updated: 2023/10/31 21:34:58 by mkobaa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != 0 && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
	{
		return ((char *)&s[i]);
	}
	else
		return (0);
}
/*
int main()
{
	printf("%s\n", ft_strchr("Hello world !", 'j'));
	printf("%s\n", strchr("Hello world !", 'j'));
}
*/
