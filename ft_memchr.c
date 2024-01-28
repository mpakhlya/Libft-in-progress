/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpakhlya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:13:07 by mpakhlya          #+#    #+#             */
/*   Updated: 2024/01/25 17:29:21 by mpakhlya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*k;

	k = (char *)s;
	i = 0;
	while (i < n)
	{
		if (k[i] == (char)c)
		{
			return ((char *)k + i);
		}
		i++;
	}
	return (00);
}
