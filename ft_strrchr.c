/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkobaa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:02:41 by mkobaa            #+#    #+#             */
/*   Updated: 2023/10/31 21:35:55 by mkobaa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = strlen(s);
	while (s[len] != c && len > 0)
	{
		len--;
	}
	if (s[len] == c)
	{
		return ((char *)&s[len]);
	}
	else 
		return (0);
}
/*
int main()
{
	char h[] = "hello world !";
	printf("%s", ft_strrchr(h, 'g'));
}
*/
