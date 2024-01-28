/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpakhlya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:27:29 by mpakhlya          #+#    #+#             */
/*   Updated: 2024/01/25 14:11:05 by mpakhlya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/types.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ch;

	i = 0;
	ch = (unsigned char *)b;
	while (i < len)
	{
		ch[i] = (unsigned char )c;
		i++;
	}
	return (b);
}
