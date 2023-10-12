/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hp-mohamed <hp-mohamed@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:57:46 by hp-mohamed        #+#    #+#             */
/*   Updated: 2023/10/12 03:09:20 by hp-mohamed       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <../include/libft.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}