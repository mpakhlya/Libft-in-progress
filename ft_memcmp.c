/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpakhlya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:39:34 by mpakhlya          #+#    #+#             */
/*   Updated: 2024/01/25 17:52:30 by mpakhlya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*k1;
	unsigned char	*k2;

	k1 = (unsigned char *)s1;
	k2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (k1[i] != k2[i])
		{
			return (k1[i] - k2[i]);
		}
		i++;
	}
	return (0);
}
