/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpakhlya <mpakhlya@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:58:20 by mpakhlya          #+#    #+#             */
/*   Updated: 2024/02/01 16:35:05 by mpakhlya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*z(char *result)
{
	result[0] = '0';
	result[1] = '\0';
	return (result);
}

char	*ft_itoa(int n)
{
	int		i;
	int		mp;
	char	*result;

	i = len(n);
	mp = 1;
	if (n < 0)
		mp = -1;
	i = i + (n <= 0);
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (!result)
		return (result);
	if (n == 0)
		return (result = z(result));
	result[i] = '\0';
	while (n != 0)
	{
		result[--i] = (char)((n % 10) * mp + '0');
		n = n / 10;
	}
	i--;
	if (mp < 0)
		result[i] = '-';
	return (result);
}
