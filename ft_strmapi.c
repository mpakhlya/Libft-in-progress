/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpakhlya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 22:29:50 by mpakhlya          #+#    #+#             */
/*   Updated: 2024/02/01 22:40:41 by mpakhlya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s1;

	i = 0;
	if (!s)
		return (0);
	s1 = ft_strdup((char *)(s));
	if (!s1)
		return (s1);
	while (s[i])
	{
		s1[i] = f(i, s1[i]);
		i++;
	}
	return (s1);
}
