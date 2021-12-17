/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:09:53 by hherba            #+#    #+#             */
/*   Updated: 2021/11/20 23:22:30 by hherba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char				*str;
	unsigned int		i;
	unsigned int		j;

	if (s1 == 0 || s2 == 0)
		return (0);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		str[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str[j++] = s2[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}
/*
int main ()
{
    char s1[]= "hafssajhkhwoih";
    char s2[]= "hreyyyy";
    printf("%s",ft_strjoin(s1,s2));
    return (0);
}*/
