/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:45:24 by hherba            #+#    #+#             */
/*   Updated: 2021/11/16 19:15:41 by hherba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				n;
	unsigned char	k;

	n = ft_strlen((char *)str);
	k = (char) c;
	if (c == 0)
		return ((char *)(str + n));
	while (n--)
	{
		if (str[n] == k)
			return ((char *)(str + n));
	}
	return (0);
}
