/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkobaa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:57:00 by mkobaa            #+#    #+#             */
/*   Updated: 2023/10/31 15:35:51 by mkobaa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	while (i < n)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else 
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
/*
int main()
{
	char s1[] = "Mohamed";
	char s2[] = "Moaamed";
	int rslt;
	int rslt2;
	rslt = ft_strncmp(s1, s2, 5);
	rslt2 = strncmp(s1, s2, 5);
	printf("%d\n", rslt);
	printf("%d\n", rslt2);
}
*/
