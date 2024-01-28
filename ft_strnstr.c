/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpakhlya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:11:04 by mpakhlya          #+#    #+#             */
/*   Updated: 2024/01/27 14:20:56 by mpakhlya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (haystack == 00 && len == 00)
		return (00);
	if (ft_strlen(needle) == 0 || haystack == needle)
		return ((char *)haystack);
	if (needle[j] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] != '\0' && i < len)
	{
		while (haystack[i + j] == needle[j] && needle[j] != '\0' && i + j < len)
			j++;
		if (needle[j] == '\0')
			return ((char *) haystack + i);
		i++;
		j = 0;
	}
	return (00);
}
