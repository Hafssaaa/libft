/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 21:43:50 by hherba            #+#    #+#             */
/*   Updated: 2021/11/15 21:46:10 by hherba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;
	unsigned char	uc;

	i = 0;
	s2 = str;
	uc = (unsigned char) c;
	while (i < n)
	{
		s2[i] = uc;
		i++;
	}
	return (str);
}
