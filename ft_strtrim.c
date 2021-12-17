/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:06:30 by hherba            #+#    #+#             */
/*   Updated: 2021/11/15 21:50:29 by hherba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	has_char(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*trim_begin(char const *s1, char const *set)
{
	while (has_char(set,*s1))
	{
		s1++;
	}
	return ((char *) s1);
}

static int	trim_end(char const *s1, char const *set)
{
	int	len;

	len = ft_strlen(s1);
	while (len-- && has_char(set, s1[len]))
		;
	return (len + 1);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	int		count;
	char	*result;

	if (s1 == 0)
		return (0);
	s1 = trim_begin(s1, set);
	count = trim_end(s1, set);
	result = malloc(count * sizeof (char) + 1);
	if (result == 0)
		return (0);
	ft_strlcpy(result, s1, count + 1);
	return (result);
}
