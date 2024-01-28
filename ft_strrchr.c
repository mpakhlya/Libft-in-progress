/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpakhlya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:07:40 by mpakhlya          #+#    #+#             */
/*   Updated: 2024/01/25 17:32:49 by mpakhlya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i != 0)
	{
		if (s[i] == (char) c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	if (s[i] == (char) c)
	{
		return ((char *)s + i);
	}
	return (00);
}
