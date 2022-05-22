/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejlee <hyejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:59:52 by hyejlee           #+#    #+#             */
/*   Updated: 2022/05/22 13:26:52 by hyejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	cnt;

	cnt = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		while ((*s != c) && *s != '\0')
			s++;
		cnt++;
	}
	return (cnt);
}

static char	*split_str(char *s, char c)
{
	char	*res;
	int		len;
	int		i;

	len = 0;
	while ((s[len] != c) && s[len] != '\0')
		len++;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	i = 0;
	while (i < len)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		res_i;

	if (s == 0)
		return (0);
	res = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (0);
	i = 0;
	res_i = 0;
	while (s[i])
	{
		while (s[i] && (s[i] == c))
			i++;
		if (s[i] && (s[i] != c))
			res[res_i++] = split_str((char *)(s + i), c);
		while (s[i] && (s[i] != c))
			i++;
	}
	res[res_i] = 0;
	return (res);
}
