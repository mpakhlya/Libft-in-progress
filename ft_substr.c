/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpakhlya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:28:38 by mpakhlya          #+#    #+#             */
/*   Updated: 2024/01/27 16:14:49 by mpakhlya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*k;
	size_t	reall;

	if (s == 00)
		return (00);
	reall = ft_strlen(s);
	if ((size_t)start > reall)
		return (ft_strdup(""));
	if (len > reall)
		len = reall;
	i = 0;
	k = (char *)malloc(sizeof(char) * (len + 1));
	if (!k)
		return (0);
	while (i < len)
	{
		k[i] = *(s + i + start);
		i++;
	}
	k[i] = '\0';
	return (k);
}
