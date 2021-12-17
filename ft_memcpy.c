/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:17:26 by hherba            #+#    #+#             */
/*   Updated: 2021/11/21 19:30:51 by hherba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	char			*s1;
	const char		*s2;
	size_t			i;

	i = 0;
	s1 = (char *) dest;
	s2 = (char *) src;
	if (!dest && !src)
		return (0);
	while (i < size)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dest);
}
