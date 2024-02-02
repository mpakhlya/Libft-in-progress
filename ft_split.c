/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpakhlya <mpakhlya@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:00:05 by mpakhlya          #+#    #+#             */
/*   Updated: 2024/02/01 22:04:22 by mpakhlya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*wordjkr(const char *s, char *word, int i, char c)
{
	int	j;

	j = 0;
	while (s[j] && s[i] != c)
	{
		word[j] = s[i];
		j++;
		i++;
	}
	word[j] = '\0';
	return (word);
}

static int	wordcount(const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			while (s[i] == c)
				i++;
		}
		else
		{
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (j);
}

static char	*putword(const char *s, char c)
{
	int		i;
	int		j;
	char	*word;
	char	*ww;

	ww = (char *) s;
	j = 0;
	i = 0;
	while (*ww && *ww == c)
	{
		ww++;
		i++;
	}
	while (*ww && *ww != c)
	{
		ww++;
		j++;
	}
	word = malloc(sizeof(char) * j + 1);
	if (!word)
		return (NULL);
	return (wordjkr(s, word, i, c));
}

static void	fri(int i, char **new)
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
	wc = wordcount(s, c);
	new = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!new)
		return (NULL);
	while (i < wc)
	{
		while (*s && *s == c)
			s++;
		new[i] = putword(s, c);
		if (!new[i])
			fri(i, new);
		while (*s && *s != c)
			s++;
		i++;
	}
	new[i] = NULL;
	return (new);
}
