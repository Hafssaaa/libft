/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:55:33 by hherba            #+#    #+#             */
/*   Updated: 2021/11/16 22:13:05 by hherba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	nbr_size(int nbr)
{
	int	count;

	count = 1;
	while (nbr)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	int		i;
	int		is_neg;
	char	*result;

	is_neg = nbr < 0;
	i = (nbr <= 0) + nbr_size(nbr);
	result = malloc(sizeof(char) * i);
	if (result == 0)
		return (0);
	result[0] = '-';
	result[--i] = 0;
	if (!is_neg)
		nbr *= -1;
	while (--i >= is_neg)
	{
		result[i] = (nbr % 10 * -1) + '0';
		nbr /= 10;
	}
	return (result);
}
