/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hp-mohamed <hp-mohamed@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:57:32 by hp-mohamed        #+#    #+#             */
/*   Updated: 2023/10/11 21:57:33 by hp-mohamed       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}
