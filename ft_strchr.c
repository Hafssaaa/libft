/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:31:01 by hherba            #+#    #+#             */
/*   Updated: 2021/11/22 20:21:08 by hherba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	k;

	i = 0;
	k = (char) c;
	while (str[i])
	{
		if (str[i] == k)
			return ((char *)(str + i));
		i++;
	}
	if (c == 0 && str[i] == 0)
		return ((char *)(str + i));
	return (0);
}
