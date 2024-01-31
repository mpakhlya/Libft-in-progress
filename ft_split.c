/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpakhlya <mpakhlya@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:00:05 by mpakhlya          #+#    #+#             */
/*   Updated: 2024/01/31 22:06:24 by mpakhlya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (j);
}

static char	*ft_putword(const char *s, char c)
{
	int		j;
	char	*word;

	j = 0;
	while (*s && *s == c)
		s++;
	while (s[j] && s[j] != c)
		j++;
	word = malloc(sizeof(char) * (j + 1));
	if (!word)
		return (0);
	j = 0;
	while (s[j] && s[j] != c)
	{
		word[j] = s[j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

static void	ft_free(int i, char **new)
{
	while (i > 0)
	{
		free(new[i - 1]);
		i--;
	}
	free(new);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		wc;
	int		i;

	if (!s)
		return (0);
	i = 0;
	wc = ft_wordcount(s, c);
	new = malloc(sizeof(char *) * wc + 1);
	if (!new)
		return (new);
	while (i < wc)
	{
		while (*s && *s == c)
			s++;
		new[i] = ft_putword(s, c);
		if (!new[i])
			ft_free(i, new);
		while (*s && *s != c)
			s++;
		i++;
	}
	new[i] = 0;
	return (new);
}
