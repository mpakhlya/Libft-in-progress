/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpakhlya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:06:47 by mpakhlya          #+#    #+#             */
/*   Updated: 2024/01/25 21:14:39 by mpakhlya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*c;

	c = (void *)malloc(count * size);
	if (c == 0)
		return (0);
	ft_bzero(c, (count * size));
	return (c);
}
