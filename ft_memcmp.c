/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:44:23 by hherba            #+#    #+#             */
/*   Updated: 2021/11/11 22:50:04 by hherba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp( const void *p1, const void *p2, size_t size)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				i;

	s1 = (const unsigned char *) p1;
	s2 = (const unsigned char *) p2;
	i = 0;
	while (i < size)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
