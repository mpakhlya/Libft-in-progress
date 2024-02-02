/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpakhlya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 23:11:18 by mpakhlya          #+#    #+#             */
/*   Updated: 2024/02/01 23:26:20 by mpakhlya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;
	char			c;

	if (n < 0)
	{
		write(fd, "-", 1);
		i = -n;
	}
	else
		i = n;
	if (i > 9)
	{
		ft_putnbr_fd(i / 10, fd);
		i %= 10;
	}
	c = i + '0';
	write(fd, &c, 1);
}
