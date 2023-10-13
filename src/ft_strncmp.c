/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hp-mohamed <hp-mohamed@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 03:14:26 by hp-mohamed        #+#    #+#             */
/*   Updated: 2023/10/13 15:05:23 by hp-mohamed       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned int i;

    i = 0;
    while (i < n)
    {
        if (s1[i] == s2[i])
        {
            i++;
        }
        else
            return (s1[i] - s2[i]);
    }
    return 0;
}

#include <stdio.h>
int main(void)
{
    char s1[] = "Mohamed";
    char s2[] = "Mohaned";
    printf("%d", ft_strncmp(s1, s2, 10));
}