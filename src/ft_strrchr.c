/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hp-mohamed <hp-mohamed@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 01:16:58 by hp-mohamed        #+#    #+#             */
/*   Updated: 2023/10/13 03:14:19 by hp-mohamed       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stddef.h>
#include <stdio.h>

char    *ft_strrchr(const char *s, int c)
{
    int i;
    
    i = ft_strlen(s);
    while (i >= 0)
    {
        if(s[i] == c)
        {
            return ((char *)(&s[i]));
        }
        i--;
    }
    return 0;
}