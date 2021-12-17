/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:33:40 by hherba            #+#    #+#             */
/*   Updated: 2021/11/15 21:53:03 by hherba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		nbr = -nbr ;
		ft_putchar_fd ('-', fd);
	}
	if (nbr < 10)
		ft_putchar_fd (nbr + '0', fd);
	else
	{
		ft_putnbr_fd ((nbr / 10), fd);
		ft_putnbr_fd ((nbr % 10), fd);
	}
}
