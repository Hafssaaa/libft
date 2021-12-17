/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:57:21 by hherba            #+#    #+#             */
/*   Updated: 2021/11/22 20:20:49 by hherba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *src )
{
	int			length;
	int			i;
	char		*p;

	length = 0;
	i = 0;
	while (src[length])
		length++;
	p = (char *)malloc(sizeof(char) * (length + 1));
	if (!p)
		return (0);
	while (i < length)
	{
		p[i] = src[i];
		i++;
	}
	p[length] = '\0';
	return (p);
}
