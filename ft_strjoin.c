/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpakhlya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:08:07 by mpakhlya          #+#    #+#             */
/*   Updated: 2024/01/28 09:33:08 by mpakhlya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*result;
	size_t	j;

	if (!s1 && !s2)
		return (00);
	if (s1 && !s2)
		return (ft_strdup(s1));
	if(!s1 && s2)
		return (ft_strdup(s2));
	i = 0;
	result =(char *) malloc(sizeof(char) * i + 1);
	if (!result)
		return (00);
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}
