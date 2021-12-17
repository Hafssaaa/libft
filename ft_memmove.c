/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:31:28 by hherba            #+#    #+#             */
/*   Updated: 2021/11/21 22:09:54 by hherba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*s1;
	const char		*s2;
	size_t			i;

	s1 = (char *) dest;
	s2 = (char *) src;
	if ((dest == src) || n == 0)
		return (dest);
	if (s1 > s2)
	{
		i = n;
		while (i--)
			s1[i] = s2[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	return (dest);
}
