/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkobaa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:36:41 by mkobaa            #+#    #+#             */
/*   Updated: 2023/10/31 22:35:26 by mkobaa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

/*
int main()
{
    char buffer1[100];
    memset(buffer3, 'Y', 50);
    printf("memset: %s\n", buffer3);

    char buffer2[100];
    ft_memset(buffer4, 'Y', 50);
    printf("ft_memset: %s\n", buffer4);
	}
*/
