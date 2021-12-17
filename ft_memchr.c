/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:01:03 by hherba            #+#    #+#             */
/*   Updated: 2021/11/21 22:08:35 by hherba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr( const void *str, int c, size_t n)
{
	size_t					i;
	const unsigned char		*s1;
	unsigned char			k;

	i = 0;
	s1 = (const unsigned char *) str;
	k = (unsigned char) c;
	while (i < n)
	{
		if (s1[i] == k)
			return ((unsigned char *)(s1 + i));
		i++;
	}
	return (0);
}
