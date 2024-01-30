/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpakhlya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:24:33 by mpakhlya          #+#    #+#             */
/*   Updated: 2024/01/29 17:53:19 by mpakhlya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_mystrchr(const char *set, char ch)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*final;
	int		i;
	int		len;

	i = 0;
	if (s1 == NULL)
		return (00);
	len = ft_strlen(s1) - 1;
	while (s1[i] && ft_mystrchr(set, s1[i]))
		i++;
	while (len > 0 && ft_mystrchr(set, s1[len]))
		len--;
	if (len < i)
		return (ft_strdup(""));
	final = (char *)malloc(sizeof(char) * (len - i + 2));
	if (!final)
		return (00);
	ft_strlcpy(final, (s1 + i), (len - i + 2));
	return (final);
}
