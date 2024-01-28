/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpakhlya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:24:14 by mpakhlya          #+#    #+#             */
/*   Updated: 2024/01/25 20:36:28 by mpakhlya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*k;
	int		i;

	i = 0;
	k = (char *)malloc (sizeof(char) * ft_strlen(s1) + 1);
	if (!k)
		return (0);
	while (s1[i])
	{
		k[i] = s1[i];
		i++;
	}
	k[i] = '\0';
	return (k);
}
