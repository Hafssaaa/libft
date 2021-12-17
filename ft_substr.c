/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:41:22 by hherba            #+#    #+#             */
/*   Updated: 2021/11/21 22:16:24 by hherba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	char			*str;
	int				s_len;

	if (s == 0)
		return (0);
	s_len = ft_strlen(s) - start;
	if (s_len < 0)
		return (ft_strdup(""));
	if (s_len < (int) len)
		len = s_len;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
			str[j++] = s[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}
