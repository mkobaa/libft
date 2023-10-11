/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hp-mohamed <hp-mohamed@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:57:43 by hp-mohamed        #+#    #+#             */
/*   Updated: 2023/10/11 21:57:44 by hp-mohamed       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (*s != 0)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		else
			s++;
	}
	return (0);
}
