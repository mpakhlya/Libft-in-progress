/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpakhlya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:05:00 by mpakhlya          #+#    #+#             */
/*   Updated: 2024/01/26 20:34:27 by mpakhlya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if ((!dst && !src) || len <= 0)
		return (dst);
	if (d > s)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
		return (dst);
	}
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
